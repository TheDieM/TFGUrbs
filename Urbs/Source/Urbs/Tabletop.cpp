// Fill out your copyright notice in the Description page of Project Settings.


#include "Tabletop.h"

// Sets default values
ATabletop::ATabletop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	


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
int ATabletop::GetHeight(FVector Vector)

{
	FVector2D Vector2D;
	float value;
	
	Vector2D.X = Vector.X + PerlinOffset.X;
	Vector2D.Y = Vector.Y + PerlinOffset.Y;
	

	value = (GetTerraininHeight(Vector2D, MountainScale, MountainAmplitude) + GetTerraininHeight(Vector2D, BoulderScale, BoulderAmplitude)) / VoxelSize;
	value = fmax(value, 0.1);
	
	if (value <= 1.0) return 1;
	if (value > MountainLevel) return 3;
	return 2;
	
}


//Generate a hexagon position vector according to x and y values
FVector ATabletop::GenerateVector(int x, int y)
{
	FVector Vector;
	
	seno = sin(60 * PI / 180);
	Gap = 200 * seno;
	if (y%2==0) {
		Vector.X = x * Gap + GetActorLocation().X + (seno*100);
	}
	else {
		Vector.X = x * Gap + GetActorLocation().X;
	}
	Vector.Y = y * 150 + GetActorLocation().Y ;
	
	Vector.Z = 1.f;
	
	return Vector;
}


//Check if randomize is true. If it is, randomize PerlinOffset value
void ATabletop::isRandomizeLayout()
{
	if (RandomizeLayout) {
		RandomValue = UKismetMathLibrary::RandomFloat();
		PerlinOffset.X = RandomValue * 5000000000.0;
		PerlinOffset.Y = PerlinOffset.X;
	}	
}


//Blueprint size getters

int ATabletop::GetXCellCount()
{
	return XCellCount;
}

int ATabletop::GetYCellCount()
{
	return YCellCount;
}










