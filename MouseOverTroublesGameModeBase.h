// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MouseOverTroublesGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MOUSEOVERTROUBLES_API AMouseOverTroublesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
