// Fill out your copyright notice in the Description page of Project Settings.


#include "Tabletop.h"

// Sets default values
ATabletop::ATabletop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	xCellCount=10;
	yCellCount=10;
	gap=100;
	mountainScale=10000;
	mountainAmplitude=5000;
	boulderScale=1000;
	boulderAmplitude=1000;


}

// Called when the game starts or when spawned
void ATabletop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATabletop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


float ATabletop::GetTerraininHeight(const FVector2D Location, const float Scale, const float Amplitude)
{
	return FMath::PerlinNoise2D(Location / Scale + FVector2D(.1f, .1f)) * Amplitude;
}


