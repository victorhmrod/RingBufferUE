using UnrealBuildTool;
using System.IO;

public class LomontRingBuffer : ModuleRules
{
    public LomontRingBuffer(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
    }
}
