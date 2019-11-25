// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Simmons_Original_WBEditorTarget : TargetRules
{
	public Simmons_Original_WBEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Simmons_Original_WB" } );
	}
}
