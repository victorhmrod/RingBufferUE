#include "RingBufferUE.h"
#include "Modules/ModuleManager.h"

class FRingBufferUEModule : public IModuleInterface
{
public:
	virtual void StartupModule() override {}
	virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE(FRingBufferUEModule, RingBufferUE)
