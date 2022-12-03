// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

class UStaticMeshComponent;
class UMaterial;

UCLASS()
class MOUSEOVERTROUBLES_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tile")
	UStaticMeshComponent* TileMesh;

	UFUNCTION()
	void CustomOnBeginMouseOver(UPrimitiveComponent* HoveredComponent);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
