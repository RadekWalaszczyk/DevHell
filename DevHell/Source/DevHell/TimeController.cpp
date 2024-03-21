// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeController.h"
#include "Kismet/KismetMathLibrary.h"

void UTimeController::OnWorldBeginPlay(UWorld& InWorld)
{
	timeLeft = dayLenght;
}

void UTimeController::Tick(float DeltaTime)
{
	timeLeft -= DeltaTime;

	dayLerp = UKismetMathLibrary::NormalizeToRange(timeLeft, 0.0f, dayLenght);
}

TStatId UTimeController::GetStatId() const
{
	return TStatId();
}

void UTimeController::UpdateDayLerp(float& lerp)
{
	if (dayLerp > 0)
	{
		lerp = 1 - dayLerp;
	}
}

