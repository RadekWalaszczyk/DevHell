// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TimeController.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class DEVHELL_API UTimeController : public UWorldSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
	
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	// Inherited via FTickableGameObject
	void Tick(float DeltaTime) override;

	TStatId GetStatId() const override;

public:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FLinearColor noonColor;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FLinearColor sunsetColor;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float sunriseAngle;	
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float sunsetAngle;

	UPROPERTY(EditDefaultsOnly)
	float dayLenght;

	float timeLeft;

	UPROPERTY(BlueprintReadOnly)
	float dayLerp;


public: 
	UFUNCTION(BlueprintCallable)
	void UpdateDayLerp(float& lerp);
};
