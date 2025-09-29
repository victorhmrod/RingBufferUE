#include "RingBufferComponent.h"
#include "RingBufferTypes.h"

URingBufferComponent::URingBufferComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void URingBufferComponent::Initialize(int32 CapacityPowerOfTwo /*= 1024*/)
{
	const int32 Clamped = FMath::Max(2, CapacityPowerOfTwo);
	ByteRing = MakeUnique<FRBByteRing>((uint32)Clamped);
	FireRing = MakeUnique<TRBPodRing<FRBFireEvent>>((uint32)Clamped);
	bInitialized = true;
}

bool URingBufferComponent::EnqueueBytes(const TArray<uint8>& Data)
{
	if (!bInitialized || !ByteRing) return false;
	return ByteRing->Enqueue(Data.GetData(), (uint32)Data.Num());
}

int32 URingBufferComponent::DequeueBytes(int32 MaxBytes, TArray<uint8>& OutData)
{
	if (!bInitialized || !ByteRing) return 0;
	OutData.SetNumUninitialized(MaxBytes);
	const uint32 Read = ByteRing->Dequeue(OutData.GetData(), (uint32)MaxBytes);
	OutData.SetNum((int32)Read);
	return (int32)Read;
}

bool URingBufferComponent::EnqueueFireEvent(const FRBFireEvent& Ev)
{
	if (!bInitialized || !FireRing) return false;
	return FireRing->Enqueue(Ev);
}

bool URingBufferComponent::DequeueFireEvent(FRBFireEvent& OutEv)
{
	if (!bInitialized || !FireRing) return false;
	return FireRing->Dequeue(OutEv);
}

int32 URingBufferComponent::NumPendingFireEvents() const
{
	if (!bInitialized || !FireRing) return 0;
	return (int32)FireRing->Size();
}

int32 URingBufferComponent::FreeFireSlots() const
{
	if (!bInitialized || !FireRing) return 0;
	return (int32)FireRing->Free();
}
