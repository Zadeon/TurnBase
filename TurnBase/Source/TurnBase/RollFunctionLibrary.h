// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "RollFunctionLibrary.generated.h"

/**
*
*/
UCLASS()
class TURNBASE_API URollFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	URollFunctionLibrary(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Dice Roller")
		static TArray<int32> diceRoller(int DiceNum = 1, int DiceSides = 6);

};
