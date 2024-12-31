// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Kismet/KismetMathLibrary.h>
#include "SeaHex.h"
#include "MountainHex.h"
#include "LandHex.h"
#include "VillageHex.h"
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

	UWorld* World = nullptr;
	UBlueprint* BP_VillageHex;
	UBlueprint* BP_LandHex;
	UBlueprint* BP_MountainHex;
	UBlueprint* BP_SeaHex;
	FRotator Rotator;
	const FActorSpawnParameters f;

	UPROPERTY(EditAnywhere)
	int XCellCount = 4;
	UPROPERTY(EditAnywhere)
	int YCellCount = 4;
	UPROPERTY(EditAnywhere)
	bool isRandomizeLayout = true;
	UPROPERTY(VisibleAnywhere)
	FVector2D PerlinOffset;

	float Gap = 100.0;

	int MountainScale = 10000;

	int MountainAmplitude = 5000;

	int BoulderScale = 1000;

	int BoulderAmplitude = 1000;

	int VoxelSize = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float MountainLevel = 0.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float SeaLevel = 0.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float VillageLevel = 0.f;

	float RandomValue;

	float seno;

	TArray<float> Heights;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> Matrix;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AActor*> Hexagons;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> Names;



	UFUNCTION(BlueprintCallable)
	void GenerateMap();

	UFUNCTION(BlueprintCallable)
	void DeleteMap();

	UFUNCTION(BlueprintCallable)
	void TestBP();

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	float GetTerraininHeight(const FVector2D Location, const float Scale, const float Amplitude);


	float GetHeight(FVector Vector);


	FVector GenerateVector(int x, int y);


	void RandomizeLayout();



	void SetLevels(TArray<float> levels);

	void SetHexType();

	void DrawMap();



	FRotator SetRotation();

	FVector SetZ(FVector Vector);

	UFUNCTION(BlueprintCallable)
	FString GetName();


};