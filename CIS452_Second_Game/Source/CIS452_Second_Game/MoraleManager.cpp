// Fill out your copyright notice in the Description page of Project Settings.


#include "MoraleManager.h"

// Sets default values
AMoraleManager::AMoraleManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//if (MoraleManager != nullptr)
	//	Destroy();
	//else
	//	MoraleManager = this;
}

// Called when the game starts or when spawned
void AMoraleManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoraleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMoraleManager::AdjustMorale(float Amt)
{
	// Create a list of buildings and calculates the morale based on their values
	Morale += Amt;
}

void AMoraleManager::UpdateText(std::string ToChange)
{
}

