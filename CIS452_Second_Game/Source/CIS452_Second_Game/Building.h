// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Building.generated.h"

UCLASS()
class CIS452_SECOND_GAME_API ABuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	int MoraleInfluence;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Place();
	virtual void UpdateValues(float value);
	virtual void Demolish();
};
