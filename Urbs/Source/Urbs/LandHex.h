// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hex.h"

#include "LandHex.generated.h"

UCLASS()
class URBS_API ALandHex : public AHex
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ALandHex();

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LandHexMesh;

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
