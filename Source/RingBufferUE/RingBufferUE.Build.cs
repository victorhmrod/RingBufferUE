using UnrealBuildTool;
using System.IO;

public class RingBufferUE : ModuleRules
{
    public RingBufferUE(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new[] {
            "Core", "CoreUObject", "Engine"
        });

        // Header-only ThirdParty include
        PublicIncludePaths.AddRange(new[] {
            Path.Combine(ModuleDirectory, "ThirdParty", "LomontRingBuffer", "include")
        });

        // Define to detect if the 3rd-party header exists at build time
        string lomontHeader = Path.Combine(ModuleDirectory, "ThirdParty", "LomontRingBuffer", "include", "RingBuffer", "RingBuffer.h");
        if (File.Exists(lomontHeader))
        {
            PublicDefinitions.Add("RB_LOMONT_AVAILABLE=1");
        }
        else
        {
            PublicDefinitions.Add("RB_LOMONT_AVAILABLE=0");
        }
    }
}
