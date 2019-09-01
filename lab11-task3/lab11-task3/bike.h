#ifndef BIKE_H
#define BIKE_H
#include"carbonfootprint.h"
class Bike :public CarbonFootprint
{
	double milesDriven;
	double fuelEfficiency;
	double co2Emission;
	double greenHouseEmmision;
public:
	Bike(double mD, double fE, double cE, double gE);
	double getCarbonFootprint();
};
#endif 

