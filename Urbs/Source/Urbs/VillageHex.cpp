// Fill out your copyright notice in the Description page of Project Settings.


#include "VillageHex.h"
#include "Tabletop.h"

// Sets default values
AVillageHex::AVillageHex()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	//Set mesh component
	VillageHexMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = VillageHexMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/Meshes/Hex/HexVillage.HexVillage'"));
	if (MeshAsset.Succeeded()) {

		UStaticMesh* mesh = MeshAsset.Object;
		VillageHexMesh->SetStaticMesh(mesh);
	}

}

// Called when the game starts or when spawned
void AVillageHex::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AVillageHex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVillageHex::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AVillageHex::SetName(FString n){
	Name=n;
}

void AVillageHex::SetNeighborhood(ATabletop* tabletop)
{
	
	TArray<AActor*> Hexagons = tabletop->getHexagons();
	int index = Hexagons.Find(this);
	UE_LOG(LogTemp, Warning, TEXT("Posición de la ciudad: %d"),index);
	
	if(index/10%2==0){
		Neighborhood.Add(Hexagons[index + 1]);
		Neighborhood.Add(Hexagons[index - 1]);
		Neighborhood.Add(Hexagons[index - 9]);
		Neighborhood.Add(Hexagons[index - 10]);
		Neighborhood.Add(Hexagons[index + 10]);
		Neighborhood.Add(Hexagons[index + 11]);
	}
	else {
		Neighborhood.Add(Hexagons[index + 1]);
		Neighborhood.Add(Hexagons[index - 1]);
		Neighborhood.Add(Hexagons[index - 11]);
		Neighborhood.Add(Hexagons[index - 10]);
		Neighborhood.Add(Hexagons[index + 10]);
		Neighborhood.Add(Hexagons[index + 9]);
	}
	

}
