// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeController.h"
#include "Kismet/KismetMathLibrary.h"

void UTimeController::OnWorldBeginPlay(UWorld& InWorld)
{
	timeLeft = dayLenght;
}

void UTimeController::UpdateDayLerp(float deltaTime, float& lerp)
{
	timeLeft -= deltaTime;

	dayLerp = UKismetMathLibrary::NormalizeToRange(timeLeft, 0.0f, dayLenght);

	if (dayLerp > 0)
	{
		lerp = 1 - dayLerp;
	}
}

