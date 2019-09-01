#include "car.h"

car::car(double mD, double fE, double cE, double gE)
{
	milesDriven = mD;
	fuelEfficiency = fE;
	co2Emission = cE;
	greenHouseEmmision = gE;
}

double car::getCarbonFootprint()
{
	double emission = ((milesDriven * 52) / fuelEfficiency)*co2Emission*greenHouseEmmision;
	return emission;
}
