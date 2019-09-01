//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"package.h"
class OvernightPackage:public package
{
private:
	double additionalFee;
public:
	OvernightPackage(double addFee,string n, string a, string c, string s, int zC, double w, double cpo);
	double CalculateCost();
	void display();
};


#endif