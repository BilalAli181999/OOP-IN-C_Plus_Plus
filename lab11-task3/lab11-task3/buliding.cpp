#include "buliding.h"

Building::Building(double aBM, double pKwh, double eeF, double nGM, double pC, double geF)
{
	averageBillPerMonth = aBM;
	pricePerKwh = pKwh;
	electricEmissionFactor = eeF;
	
	naturalGasPerMonth = nGM;
	pricePerCubic = pC;
	gasEmissionFactor = geF;

}

double Building::getCarbonFootprint()
{
	double electric,gas;
	electric = (averageBillPerMonth / pricePerKwh)*electricEmissionFactor * 12;
	gas = (naturalGasPerMonth / pricePerCubic)*gasEmissionFactor * 12;
	return (electric + gas);
}
