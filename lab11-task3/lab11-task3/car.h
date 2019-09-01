#ifndef CAR_H
#define CAR_H
#include"carbonfootprint.h"
class car:public CarbonFootprint
{
	double milesDriven;
	double fuelEfficiency;
	double co2Emission;
	double greenHouseEmmision;
public:
	car(double mD, double fE, double cE, double gE);
	double getCarbonFootprint();
};

#endif
