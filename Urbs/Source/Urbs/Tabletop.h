// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tabletop.generated.h"

UCLASS()
class URBS_API ATabletop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATabletop();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	int xCellCount;
	int yCellCount;
	int gap;
	int mountainScale;
	int mountainAmplitude;
	int boulderScale;
	int boulderAmplitude;






	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	float GetTerraininHeight(const FVector2D Location, const float Scale, const float Amplitude);

	void GenerateTabletop();

};
