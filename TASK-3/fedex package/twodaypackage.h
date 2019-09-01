//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include"package.h"
class TwoDayPackage:public package
{
	double flatFee;
public:
	TwoDayPackage(double flatFee, string n, string a, string c, string s, int zC, double w, double cpo);
	double calculateCost();
	void display();
};

#endif