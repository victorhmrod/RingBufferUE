#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RingBufferTypes.h"
#include "RingBufferComponent.generated.h"

class FRBByteRing;
template<typename T> class TRBPodRing;

/**
 * Blueprint-friendly RingBuffer component (SPSC).
 * Initialize once, then enqueue/dequeue bytes or FRBFireEvent entries.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RINGBUFFERUE_API URingBufferComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	URingBufferComponent();

	/** Call once before use. Capacity must be power-of-two (we clamp it). */
	UFUNCTION(BlueprintCallable, Category="RingBuffer|Setup")
	void Initialize(int32 CapacityPowerOfTwo = 1024);

	// ---- Bytes API ----
	UFUNCTION(BlueprintCallable, Category="RingBuffer|Bytes")
	bool EnqueueBytes(const TArray<uint8>& Data);

	UFUNCTION(BlueprintCallable, Category="RingBuffer|Bytes")
	int32 DequeueBytes(int32 MaxBytes, UPARAM(ref) TArray<uint8>& OutData);

	// ---- Fire Event (example POD) ----
	UFUNCTION(BlueprintCallable, Category="RingBuffer|Fire")
	bool EnqueueFireEvent(const FRBFireEvent& Ev);

	UFUNCTION(BlueprintCallable, Category="RingBuffer|Fire")
	bool DequeueFireEvent(UPARAM(ref) FRBFireEvent& OutEv);

	UFUNCTION(BlueprintPure, Category="RingBuffer|Fire")
	int32 NumPendingFireEvents() const;

	UFUNCTION(BlueprintPure, Category="RingBuffer|Fire")
	int32 FreeFireSlots() const;

private:
	bool bInitialized = false;

	TUniquePtr<FRBByteRing> ByteRing;
	TUniquePtr<TRBPodRing<FRBFireEvent>> FireRing;
};
