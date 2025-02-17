// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hex.h"
#include "MountainHex.generated.h"

UCLASS()
class URBS_API AMountainHex : public AHex
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMountainHex();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MountainHexMesh;

};
