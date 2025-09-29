# RingBufferUE (UE5 Plugin)

UE-friendly wrapper for a Single-Producer Single-Consumer ring buffer.
- If you place Chris Lomont's `RingBuffer.h` into `Source/RingBufferUE/ThirdParty/LomontRingBuffer/include/RingBuffer/RingBuffer.h`,
  the macro `RB_LOMONT_AVAILABLE` becomes 1 at build time and you can adapt the calls to use his implementation.
- If not present, a header-only fallback lock-free SPSC implementation is used.

## Install
1. Copy the `RingBufferUE` folder into `<YourProject>/Plugins/`.
2. (Optional) Put the third-party header at:
   `Plugins/RingBufferUE/Source/RingBufferUE/ThirdParty/LomontRingBuffer/include/RingBuffer/RingBuffer.h`
3. Generate project files, build.

## Use
```cpp
// .h
UPROPERTY(VisibleAnywhere)
URingBufferComponent* RingBufferComp;

// .cpp
RingBufferComp = NewObject<URingBufferComponent>(this);
RingBufferComp->RegisterComponent();
RingBufferComp->Initialize(1024);

FRBFireEvent Ev;
Ev.TimeSeconds = GetWorld()->TimeSeconds;
Ev.ShotId = 1;
Ev.Damage = 12.0f;
RingBufferComp->EnqueueFireEvent(Ev);

FRBFireEvent Out;
while (RingBufferComp->DequeueFireEvent(Out))
{
    // process event
}
```

## License Note
This plugin includes only a path for the 3rd-party header. Verify licensing of the external repository before distributing it in a commercial product.
