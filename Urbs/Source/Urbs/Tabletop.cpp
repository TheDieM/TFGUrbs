// Fill out your copyright notice in the Description page of Project Settings.


#include "Tabletop.h"

// Sets default values
ATabletop::ATabletop()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	//Generate Names Array
	Names.Add(TEXT("Roma"));
	Names.Add(TEXT("Ostia"));
	Names.Add(TEXT("Capua"));
	Names.Add(TEXT("Tarracina"));
	Names.Add(TEXT("Antium"));
	Names.Add(TEXT("Neapolis"));
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


//Gets the height according to it's possition
float ATabletop::GetHeight(FVector Vector)

{
	FVector2D Vector2D;
	float value;

	Vector2D.X = Vector.X + PerlinOffset.X;
	Vector2D.Y = Vector.Y + PerlinOffset.Y;


	value = (GetTerraininHeight(Vector2D, MountainScale, MountainAmplitude) + GetTerraininHeight(Vector2D, BoulderScale, BoulderAmplitude)) / VoxelSize;
	
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
}


//Generate map 
void ATabletop::GenerateMap()
{
	FVector Location;
	World = GetWorld();
	
	RandomizeLayout();
	
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

// Set a SeaLevel to have 25% of SeaHex hexes on tabletop and Mountainlevel to get another 25% as MountainHex
void ATabletop::SetLevels(TArray<float> levels)
{
	int Size = levels.GetAllocatedSize() / levels.GetTypeSize();
	Size = Size / 4;

	levels.Sort();


	SeaLevel = levels[Size];
	VillageLevel = levels[Size * 2];
	MountainLevel = levels[Size * 3];

}

//If Height below SeaLevel set a SeaHex(SeaLevel value), if it's over MountainLevel set as MountainHex(MountainLevel value)
void ATabletop::SetHexType()
{
	for (int i = 0; i < (XCellCount * YCellCount); i++) {
		if (Matrix[i].Z < SeaLevel) {
			Matrix[i].Z = SeaLevel;
			continue;
		}
		if (Matrix[i].Z > MountainLevel) {
			Matrix[i].Z = MountainLevel;
			continue;
		}
	}
}

//Set villages possition 
void ATabletop::DrawMap()
{
 int j = 4;
 int rnd = 0;

	for (int i = 0 ; i < j ; i++){
		do{
			do{
				rnd = UKismetMathLibrary::RandomInteger(XCellCount * YCellCount);				
			} while ( rnd % 10 == 0 ||rnd % 10 == 9 || rnd < XCellCount || rnd> XCellCount * YCellCount-XCellCount);
			if(Matrix[rnd].Z > SeaLevel && Matrix[rnd].Z < MountainLevel){
				Matrix[rnd].Z = -1 ;
			}
			UE_LOG(LogTemp, Warning, TEXT("valor: %d "),rnd);
		}while(Matrix[rnd].Z != -1);		
	}		
}

//Set random rotation on Z axis
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

// Reset Z value to 0
FVector ATabletop::SetZ(FVector Vector)
{
	Vector.Z = 0;
	return Vector;
}

//Return a name from the list
FString ATabletop::GetName(){
	FString value;
	value = Names.HeapTop();
	Names.Remove(value);
	return value;
}

//Get date value
FVector2D ATabletop::GetDate()
{
	FVector2D value;
	value.X = year;
	value.Y = season;
	return value;
}

//Increment season and each 4th turn increase year
FVector2D ATabletop::incDate()
{
	
	if (season == 3) {
		season = 0;
		year++;
	}
	else {
		season++;
	}
	

	return GetDate();
}

// Hexagons getter for blueprint use(Not possible to copy values with blueprint getter)
TArray<AActor*> ATabletop::getHexagons()
{
	return Hexagons;
}




