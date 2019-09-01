//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "twodaypackage.h"

TwoDayPackage::TwoDayPackage(double flatFee, string n, string a, string c, string s, int zC, double w, double cpo):package(n,a,c,s,zC,w,cpo)
{
	this->flatFee = flatFee;

}

double TwoDayPackage::calculateCost()
{
	double cost = package::calculateCost() + flatFee;
	return cost;
}

void TwoDayPackage::display()
{
	package::display();
	cout << "\n FLAT FEE :" << flatFee;
}
