// Fill out your copyright notice in the Description page of Project Settings.


#include "Building.h"

// Sets default values
ABuilding::ABuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/// <summary>
/// This method will be used for the placement of buildings.
/// It will handle finding and adjusting surrounding buildings according
/// to this object's purpose.
/// </summary>
void ABuilding::Place()
{
}

/// <summary>
/// This method will be called by another buliding in order to make 
/// adjustments to this buliding's morale influence.
/// </summary>
/// <param name="value"></param>
void ABuilding::UpdateValues(float value)
{
}

/// <summary>
/// Called upon the destruction/removal of a building.
/// Handles whatever changes may occur to the buildings surrounding
/// the destroyed building.
/// </summary>
void ABuilding::Demolish()
{
}

