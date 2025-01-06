// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hex.h"
#include "VillageHex.h"
#include "LandHex.generated.h"

UCLASS()
class URBS_API ALandHex : public AHex
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ALandHex();


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* LandHexMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Level = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int WoodBonus = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int StoneBonus = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AVillageHex* VillageOwner = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION()
	void OnSelected();
};
