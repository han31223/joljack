// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AAA_GamePoject : ModuleRules
{
	public AAA_GamePoject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
