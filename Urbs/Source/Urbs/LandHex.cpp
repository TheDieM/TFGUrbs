// Fill out your copyright notice in the Description page of Project Settings.


#include "LandHex.h"

// Sets default values
ALandHex::ALandHex()
{
	
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	//
	//Set mesh component
	LandHexMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = LandHexMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/Meshes/Hex/HexLand.HexLand'"));
	if (MeshAsset.Succeeded()) {

		UStaticMesh* mesh = MeshAsset.Object;
		LandHexMesh->SetStaticMesh(mesh);
	}
	

}

