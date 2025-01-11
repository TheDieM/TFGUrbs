// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hex.h"
#include "SeaHex.generated.h"

UCLASS()
class URBS_API ASeaHex : public AHex
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASeaHex();


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* SeaHexMesh;

};
