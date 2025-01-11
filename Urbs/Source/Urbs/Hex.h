// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Hex.generated.h"


UCLASS()
class URBS_API AHex : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AHex();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AActor* Village;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool BelongsToUser = false;

	
};
