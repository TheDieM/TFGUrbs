// Fill out your copyright notice in the Description page of Project Settings.


#include "Tabletop.h"

// Sets default values
ATabletop::ATabletop()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	FString s = "/Game/Blueprints/BP_VillageHex";
	BP_VillageHex = Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(),nullptr,*s));
	s = "/Game/Blueprints/BP_LandHex";
	BP_LandHex = Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), nullptr, *s));
	s = "/Game/Blueprints/BP_MountainHex";
	BP_MountainHex = Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), nullptr, *s));
	s = "/Game/Blueprints/BP_SeaHex";
	BP_SeaHex = Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), nullptr, *s));
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




//Return a height value according to location, scale and amplitude
float ATabletop::GetTerraininHeight(const FVector2D Location, const float Scale, const float Amplitude)
{
	return FMath::PerlinNoise2D(Location / Scale + FVector2D(.1f, .1f)) * Amplitude;
}


/***Gets the height according to it's possition and returns:
*
*	0--> Water hexagon
*	1--> Mountain hexagon
*	2--> Land hexagon
*/
float ATabletop::GetHeight(FVector Vector)

{
	FVector2D Vector2D;
	float value;

	Vector2D.X = Vector.X + PerlinOffset.X;
	Vector2D.Y = Vector.Y + PerlinOffset.Y;


	value = (GetTerraininHeight(Vector2D, MountainScale, MountainAmplitude) + GetTerraininHeight(Vector2D, BoulderScale, BoulderAmplitude)) / VoxelSize;
	//value = fmax(value, 0.1);

	return value;

}


//Generate a hexagon position vector according to x and y values
FVector ATabletop::GenerateVector(int x, int y)
{
	FVector Vector;

	seno = sin(60 * PI / 180);
	Gap = 200 * seno;
	if (y % 2 == 0) {
		Vector.X = x * Gap + GetActorLocation().X + (seno * 100);
	}
	else {
		Vector.X = x * Gap + GetActorLocation().X;
	}
	Vector.Y = y * 150 + GetActorLocation().Y;

	Vector.Z = 1.f;

	return Vector;
}


//Check if randomize is true. If it is, randomize PerlinOffset value
void ATabletop::RandomizeLayout()
{
	if (isRandomizeLayout) {
		RandomValue = UKismetMathLibrary::RandomFloat();
		PerlinOffset.X = RandomValue * 5000000000.0;
		PerlinOffset.Y = PerlinOffset.X;
	}

	//TArray<TArray<float>> floatArray;


}



void ATabletop::GenerateMap()
{
	FVector Location;
	World = GetWorld();

	if (BP_VillageHex == nullptr || BP_LandHex == nullptr || BP_MountainHex == nullptr || BP_SeaHex == nullptr ) UE_LOG(LogTemp, Warning, TEXT("No blueprint"));

	RandomizeLayout();

	Heights.Empty();
	Matrix.Empty();
	DeleteMap();

	for (int i = 0; i < YCellCount; i++) {
		for (int j = 0; j < XCellCount; j++) {
			Location = GenerateVector(j, i);
			Heights.Add(GetHeight(Location));
			Location.Z = Heights.Last();
			Matrix.Add(Location);
		}
	}

	SetLevels(Heights);

	SetHexType();

	DrawMap();





}

void ATabletop::SetLevels(TArray<float> levels)
{
	int Size = levels.GetAllocatedSize() / levels.GetTypeSize();
	Size = Size / 4;

	levels.Sort();


	SeaLevel = levels[Size];
	VillageLevel = levels[Size * 2];
	MountainLevel = levels[Size * 3];

}

void ATabletop::SetHexType()
{
	for (int i = 0; i < (XCellCount * YCellCount); i++) {
		if (Matrix[i].Z < SeaLevel) {
			Matrix[i].Z = SeaLevel;
			continue;
		}
		if (Matrix[i].Z == VillageLevel) {
			Matrix[i].Z = -1;
			continue;
		}
		if (Matrix[i].Z > MountainLevel) {
			Matrix[i].Z = MountainLevel;
			continue;
		}
	}
}

void ATabletop::DrawMap()
{
	
	for (int i = 0; i < (XCellCount * YCellCount); i++) {
		/*if (Matrix[i].Z == -1) {
			Hexagons.Add(World->SpawnActor<AVillageHex>(BP_VillageHex->GeneratedClass, SetZ(Matrix[i]), SetRotation(), f));
			continue;
		}*/
		//if (Matrix[i].Z == SeaLevel) Hexagons.Add(World->SpawnActor<ASeaHex>(BP_SeaHex->GeneratedClass, SetZ(Matrix[i]), SetRotation(), f));
		//if (Matrix[i].Z == MountainLevel) Hexagons.Add(World->SpawnActor<AMountainHex>(BP_MountainHex->GeneratedClass, SetZ(Matrix[i]), SetRotation(), f));
		//if (Matrix[i].Z > SeaLevel && Matrix[i].Z < MountainLevel) Hexagons.Add(World->SpawnActor<ALandHex>(BP_LandHex->GeneratedClass, SetZ(Matrix[i]), Rotator, f));
	}
	
}

void ATabletop::DeleteMap()
{
	if (Hexagons.IsEmpty()) return;
	for (int i = 0; i < (XCellCount * YCellCount); i++) {
		if (World->ContainsActor(Hexagons[i])) World->DestroyActor(Hexagons[i]);
	}
	Hexagons.Empty();
	Rotator.Pitch = 0;
	Rotator.Roll = 0;
	Rotator.Yaw = 0;
}

void ATabletop::TestBP()
{
	World = GetWorld();
	FTransform t;
	FVector v;

	if (BP_VillageHex == nullptr) UE_LOG(LogTemp, Warning, TEXT("No blueprint"));
	
	v.X = 0;
	v.Y = 0;
	v.Z = 200;
	t.SetLocation(v);
	AActor* SpA = World->SpawnActor<AActor>(BP_VillageHex->GeneratedClass,t,f);
}

FRotator ATabletop::SetRotation()
{

	int a = rand() % 6;
	switch (a) {
	case 0:
		Rotator.Yaw = 0;
		break;
	case 1:
		Rotator.Yaw = 60;
		break;
	case 2:
		Rotator.Yaw = 120;
		break;
	case 3:
		Rotator.Yaw = 180;
		break;
	case 4:
		Rotator.Yaw = 240;
		break;
	case 5:
		Rotator.Yaw = 300;
		break;
	}
	return Rotator;
}

FVector ATabletop::SetZ(FVector Vector)
{
	Vector.Z = 0;
	return Vector;
}

