// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASSample : ModuleRules
{
	public GASSample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", 
			"GameplayAbilities",/* 修改：注册插件 */
			"GameplayTags", "GameplayTasks"/* 修改：自定义Task需要 */
		});
	}
}
