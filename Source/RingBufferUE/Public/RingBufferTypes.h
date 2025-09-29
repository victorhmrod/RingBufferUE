#pragma once
#include "CoreMinimal.h"

/**
 * Minimal UE wrapper types for an SPSC ring buffer with bytes or POD structs.
 * If RB_LOMONT_AVAILABLE=1, the Lomont header is included; otherwise, a simple lock-free fallback is used.
 */

#if RB_LOMONT_AVAILABLE
// Include exactly the header from the 3rd-party repo (place it at ThirdParty/LomontRingBuffer/include/RingBuffer/RingBuffer.h)
#include "RingBuffer/RingBuffer.h"
#endif

// Example POD event for gameplay (keep trivially copyable)
USTRUCT(BlueprintType)
struct FRBFireEvent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="RingBuffer")
	float TimeSeconds = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="RingBuffer")
	int32 ShotId = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="RingBuffer")
	float Damage = 0.f;
};

// ---- UE-facing byte ring (SPSC) ----
class FRBByteRing
{
public:
	explicit FRBByteRing(uint32 CapacityPowerOfTwo = 1024);
	~FRBByteRing();

	bool Enqueue(const uint8* Data, uint32 Len); // non-blocking; false if not enough space
	uint32 Dequeue(uint8* Out, uint32 MaxLen);   // returns bytes read
	uint32 FreeSpace() const;
	uint32 Size() const;
	uint32 Capacity() const { return CapacityMask + 1; }
	bool   IsEmpty() const { return Size() == 0; }
	bool   IsFull()  const { return FreeSpace() == 0; }

private:
#if RB_LOMONT_AVAILABLE
	// If adapting to Lomont implementation, you can replace Backing with the concrete ring
	// e.g., lomont::RingBuffer<uint8> Impl;
	TUniquePtr<uint8[]> Backing;
#else
	// Fallback: lock-free SPSC power-of-two ring using atomics
	TUniquePtr<uint8[]> Buffer;
	mutable std::atomic<uint32> Head{0};
	mutable std::atomic<uint32> Tail{0};
#endif
	uint32 CapacityMask = 0;
};

// ---- POD helper ring (e.g., FRBFireEvent) ----
template<typename T>
class TRBPodRing
{
public:
	static_assert(TIsTriviallyCopyConstructible<T>::Value && TIsTriviallyDestructible<T>::Value,
	              "TRBPodRing requires trivially copyable/destructible types (POD).");
	explicit TRBPodRing(uint32 CapacityPowerOfTwo = 1024) : Bytes(CapacityPowerOfTwo * sizeof(T)) {}

	bool Enqueue(const T& Item)
	{
		return Bytes.Enqueue(reinterpret_cast<const uint8*>(&Item), sizeof(T));
	}
	bool Dequeue(T& Out)
	{
		return Bytes.Dequeue(reinterpret_cast<uint8*>(&Out), sizeof(T)) == sizeof(T);
	}
	uint32 Capacity() const { return Bytes.Capacity() / sizeof(T); }
	uint32 Size()     const { return Bytes.Size() / sizeof(T); }
	uint32 Free()     const { return Bytes.FreeSpace() / sizeof(T); }
	bool   IsEmpty()  const { return Bytes.IsEmpty(); }
	bool   IsFull()   const { return Bytes.IsFull(); }

private:
	FRBByteRing Bytes;
};

// ================== IMPLEMENTATION ==================
inline uint32 RB_NextPow2(uint32 v)
{
	v = FMath::Max(2u, v);
	return 1u << (32 - FMath::CountLeadingZeros(v - 1));
}

inline FRBByteRing::FRBByteRing(uint32 CapacityPowerOfTwo)
{
	const uint32 Cap = RB_NextPow2(CapacityPowerOfTwo);
	CapacityMask = Cap - 1;

#if RB_LOMONT_AVAILABLE
	// If using Lomont's implementation directly, replace with its type here.
	Backing = MakeUnique<uint8[]>(Cap);
#else
	Buffer = MakeUnique<uint8[]>(Cap);
#endif
}

inline FRBByteRing::~FRBByteRing() {}

inline bool FRBByteRing::Enqueue(const uint8* Data, uint32 Len)
{
	if (!Data || Len == 0) return true;

#if RB_LOMONT_AVAILABLE
	// TODO: Adapt this to Lomont's API (e.g., try_push_block). For now, fallback behavior:
#endif

	// Fallback SPSC lock-free
	uint32 head = Head.load(std::memory_order_relaxed);
	uint32 tail = Tail.load(std::memory_order_acquire);
	uint32 cap  = CapacityMask + 1;

	uint32 used = (head - tail) & CapacityMask;
	uint32 freeSpace = cap - used;
	if (Len > freeSpace) return false;

	uint32 first = FMath::Min(Len, cap - (head & CapacityMask));
	FMemory::Memcpy(Buffer.Get() + (head & CapacityMask), Data, first);
	FMemory::Memcpy(Buffer.Get(), Data + first, Len - first);

	Head.store(head + Len, std::memory_order_release);
	return true;
}

inline uint32 FRBByteRing::Dequeue(uint8* Out, uint32 MaxLen)
{
	if (!Out || MaxLen == 0) return 0;

#if RB_LOMONT_AVAILABLE
	// TODO: Adapt this to Lomont's API (e.g., try_pop_block). For now, fallback behavior:
#endif

	uint32 head = Head.load(std::memory_order_acquire);
	uint32 tail = Tail.load(std::memory_order_relaxed);
	uint32 cap  = CapacityMask + 1;

	uint32 size = (head - tail) & CapacityMask;
	uint32 take = FMath::Min<uint32>(MaxLen, size);

	uint32 first = FMath::Min(take, cap - (tail & CapacityMask));
	FMemory::Memcpy(Out, Buffer.Get() + (tail & CapacityMask), first);
	FMemory::Memcpy(Out + first, Buffer.Get(), take - first);

	Tail.store(tail + take, std::memory_order_release);
	return take;
}

inline uint32 FRBByteRing::FreeSpace() const
{
#if RB_LOMONT_AVAILABLE
	// return Impl.free_space();
#endif
	uint32 head = Head.load(std::memory_order_acquire);
	uint32 tail = Tail.load(std::memory_order_acquire);
	return ((CapacityMask + 1) - ((head - tail) & CapacityMask)) & CapacityMask;
}

inline uint32 FRBByteRing::Size() const
{
#if RB_LOMONT_AVAILABLE
	// return Impl.size();
#endif
	uint32 head = Head.load(std::memory_order_acquire);
	uint32 tail = Tail.load(std::memory_order_acquire);
	return (head - tail) & CapacityMask;
}
