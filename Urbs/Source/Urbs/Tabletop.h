// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Kismet/KismetMathLibrary.h>
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

	UPROPERTY(EditAnywhere)
	int XCellCount = 10;
	UPROPERTY(EditAnywhere)
	int YCellCount = 10;
	UPROPERTY(EditAnywhere)
	float Gap = 100.0;
	UPROPERTY(EditAnywhere)
	int MountainScale = 10000;
	UPROPERTY(EditAnywhere)
	int MountainAmplitude = 5000;
	UPROPERTY(EditAnywhere)
	int BoulderScale = 1000;
	UPROPERTY(EditAnywhere)
	int BoulderAmplitude = 1000;
	UPROPERTY(EditAnywhere)
	int VoxelSize = 100;
	UPROPERTY(EditAnywhere)
	int MountainLevel = 15;
	UPROPERTY(EditAnywhere)
	bool RandomizeLayout = true;
	UPROPERTY(EditAnywhere)
	FVector2D PerlinOffset;
	UPROPERTY(EditAnywhere)
	float RandomValue;
	UPROPERTY(EditAnywhere)
	float seno;
	







	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	float GetTerraininHeight(const FVector2D Location, const float Scale, const float Amplitude);

	UFUNCTION(BlueprintCallable)
	int GetHeight(FVector Vector);

	UFUNCTION(BlueprintCallable)
	FVector GenerateVector(int x, int y);

	UFUNCTION(BlueprintCallable)
	void isRandomizeLayout();

	UFUNCTION(BlueprintCallable)
	int GetXCellCount();

	UFUNCTION(BlueprintCallable)
	int GetYCellCount();

	

	

	

};
