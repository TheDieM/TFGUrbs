// Fill out your copyright notice in the Description page of Project Settings.


#include "SeaHex.h"

// Sets default values
ASeaHex::ASeaHex()
{
	
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	//Set mesh component
	SeaHexMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = SeaHexMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/Meshes/Hex/HexSea.HexSea'"));
	if (MeshAsset.Succeeded()) {

		UStaticMesh* mesh = MeshAsset.Object;
		SeaHexMesh->SetStaticMesh(mesh);
	}
		
}


// Called when the game starts or when spawned
void ASeaHex::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASeaHex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASeaHex::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
