//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "overnightPackage.h"

OvernightPackage::OvernightPackage(double addFee, string n, string a, string c, string s, int zC, double w, double cpo):package(n, a, c, s, zC, w, cpo)
{
	additionalFee = addFee;
}

double OvernightPackage::CalculateCost()
{
	double cost;
	cost = package::calculateCost() +(additionalFee*getWeight());
	return cost;
}

void OvernightPackage::display()
{
	package::display();
	cout << "\n ADDITIONAL SHIPPING FEE PER OUNCE: " << additionalFee;
}
