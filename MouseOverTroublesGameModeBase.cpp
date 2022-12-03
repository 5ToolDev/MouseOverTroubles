// Copyright Epic Games, Inc. All Rights Reserved.


#include "MouseOverTroublesGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void AMouseOverTroublesGameModeBase::BeginPlay()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    PC->bShowMouseCursor = true;
    PC->bEnableMouseOverEvents = true;
    PC->bEnableClickEvents = true;
}