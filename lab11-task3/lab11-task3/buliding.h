
#ifndef BUILDING_H
#define BUILDING_H
#include"carbonfootprint.h"
class Building:public CarbonFootprint
{
	double averageBillPerMonth;
	double pricePerKwh;
	double electricEmissionFactor;
	double gasEmission;
	double naturalGasPerMonth;
	double pricePerCubic;
	double gasEmissionFactor;
public:
	Building(double aBM, double pKwh, double eeF, double nGM, double pC, double geF);
	double getCarbonFootprint();
};

#endif
