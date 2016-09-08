// Fill out your copyright notice in the Description page of Project Settings.

#include "TurnBase.h"
#include "RollFunctionLibrary.h"

URollFunctionLibrary::URollFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}
TArray<int32> URollFunctionLibrary::diceRoller(int DiceNum, int DiceSides)
{
	TArray<int32> ReturnArray; // Create the TArray
	if (!DiceNum || !DiceSides)
	{
		return ReturnArray; //Return Empty, to avoid issues
	}
	for (int a = 0; a < DiceNum; a++)// Start of forloop
	{
		ReturnArray.Insert(FMath::FRandRange(1, DiceSides + 1), a); //Insert the appropriate number that was rolled
	}

	return ReturnArray;

}
