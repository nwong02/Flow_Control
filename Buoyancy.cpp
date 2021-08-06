#include <stdio.h>
#include <math.h>

/*
* Project		: Flow Control
* Title			: Buoyancy.cpp
* Author		: Nelson Wong
* Description	: Program uses Archimedes' Principle to calculate the buoyancy of an object in water. Program inputs the mass of an object in kg, radius of a sphere in metres, and determines if the object will sink or float in water
*/


#define SPECIFIC_WEIGHT_WATER_KG_M3 999.7
#define M_PI acos(-1.0)
#define gravity 9.81


double buoyancy(double radius);

double buoyancy(double radius)
{
	double volume = (4 / 3) * M_PI * (radius * radius);
	double buoyancy = volume * SPECIFIC_WEIGHT_WATER_KG_M3;
	return buoyancy;
}




double weight(int mass);

double weight(int mass)
{
	double weight = mass * gravity;
	return weight;
}


int main(void)
{
	int massOfObject = 75;		// mass in kg
	double objectRadius = 0.5;	// length in metres

	double buoyant = buoyancy(objectRadius);
	double gravitationalWeight = weight(massOfObject);

	if (buoyant >= gravitationalWeight)
	{
		printf("The object will sink.\n");
	}
	else
	{
		printf("The object will float.\n");
	}

	return 0;
}