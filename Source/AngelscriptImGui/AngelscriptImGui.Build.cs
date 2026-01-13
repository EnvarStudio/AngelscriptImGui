// Copyright Envar Games AB. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class AngelscriptImGui : ModuleRules
{
	public AngelscriptImGui(ReadOnlyTargetRules Target) : base(Target)
	{		
		bLegacyPublicIncludePaths = false;
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PrivateIncludePaths.AddRange(new string[]
		{
			ModuleDirectory + "/Private",
		});

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"Slate",
			"AngelscriptCode",
			"ImGui",
		});
	}
}
