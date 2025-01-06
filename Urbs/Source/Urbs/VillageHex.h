// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hex.h"
#include "VillageHex.generated.h"

UCLASS()
class URBS_API AVillageHex : public AHex
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVillageHex();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString Name = "Figaredo";
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Level=1;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool BelongsToUser = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AActor*> Neighborhood;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Wood = 10;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Stone = 10;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Iron = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Gold = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Population = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int incWood = 2;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int incStone = 2;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int incIron = 2;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int incGold = 2;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int incPopulation = 2;


private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VillageHexMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable)
	void SetName(FString n);

	UFUNCTION(BlueprintCallable)
	void SetNeighborhood(ATabletop* tabletop);
};
