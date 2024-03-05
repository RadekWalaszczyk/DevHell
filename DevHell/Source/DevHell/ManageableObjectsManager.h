// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ManageableObjectsManager.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class DEVHELL_API UManageableObjectsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	UManageableObjectsManager() {}
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

public:
	UFUNCTION(BlueprintCallable)
	static void DestroyComponentForced(UActorComponent* ActorComponent);
};
