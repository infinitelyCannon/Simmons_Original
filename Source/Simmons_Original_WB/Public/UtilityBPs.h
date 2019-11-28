// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilityBPs.generated.h"

/**
 * 
 */
UCLASS()
class SIMMONS_ORIGINAL_WB_API UUtilityBPs : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FString GetWorkingDirectory();
};
