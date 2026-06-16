// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Parcial_1_Puzzle : ModuleRules
{
	public Parcial_1_Puzzle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Parcial_1_Puzzle",
			"Parcial_1_Puzzle/Variant_Platforming",
			"Parcial_1_Puzzle/Variant_Platforming/Animation",
			"Parcial_1_Puzzle/Variant_Combat",
			"Parcial_1_Puzzle/Variant_Combat/AI",
			"Parcial_1_Puzzle/Variant_Combat/Animation",
			"Parcial_1_Puzzle/Variant_Combat/Gameplay",
			"Parcial_1_Puzzle/Variant_Combat/Interfaces",
			"Parcial_1_Puzzle/Variant_Combat/UI",
			"Parcial_1_Puzzle/Variant_SideScrolling",
			"Parcial_1_Puzzle/Variant_SideScrolling/AI",
			"Parcial_1_Puzzle/Variant_SideScrolling/Gameplay",
			"Parcial_1_Puzzle/Variant_SideScrolling/Interfaces",
			"Parcial_1_Puzzle/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
