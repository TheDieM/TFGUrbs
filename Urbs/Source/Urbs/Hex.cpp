// Fill out your copyright notice in the Description page of Project Settings.


#include "Hex.h"
// Sets default values
AHex::AHex()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
}


// Called when the game starts or when spawned
void AHex::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHex::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

