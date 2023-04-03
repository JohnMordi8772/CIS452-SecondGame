// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoraleManager.generated.h"

UCLASS()
class CIS452_SECOND_GAME_API AMoraleManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoraleManager();
	//static AMoraleManager* GetManager() { return MoraleManager; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float Morale;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/// <summary>
	/// Update morale value. Input positive number to increase
	/// and a negative number to decrease.
	/// </summary>
	/// <param name="Amt"></param>
	void AdjustMorale(float Amt);

	void UpdateText(std::string ToChange);
private:
	//static AMoraleManager* MoraleManager;
};
