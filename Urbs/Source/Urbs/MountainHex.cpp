// Fill out your copyright notice in the Description page of Project Settings.


#include "MountainHex.h"

// Sets default values
AMountainHex::AMountainHex()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MountainHexMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MountainHexMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/Meshes/Hex/HexMountiain.HexMountiain'"));
	if (MeshAsset.Succeeded()) {

		UStaticMesh* mesh = MeshAsset.Object;
		MountainHexMesh->SetStaticMesh(mesh);
	}

}

// Called when the game starts or when spawned
void AMountainHex::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMountainHex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMountainHex::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



