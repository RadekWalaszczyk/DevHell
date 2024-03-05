// Fill out your copyright notice in the Description page of Project Settings.


#include "ManageableObjectsManager.h"
#include "Components/ActorComponent.h"

void UManageableObjectsManager::Initialize(FSubsystemCollectionBase& Collection)
{
}

/// <summary>
/// Ustawia bAllowAnyoneToDestroyMe na true poniewa¿ nie da sie tego zrobiæ za pomoc¹ blurptintów
/// </summary>
/// <param name="ActorComponent"></param>
void UManageableObjectsManager::DestroyComponentForced(UActorComponent* ActorComponent)
{
	ActorComponent->bAllowAnyoneToDestroyMe = true;
	ActorComponent->DestroyComponent();
}
