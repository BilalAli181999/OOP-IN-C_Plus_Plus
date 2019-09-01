//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include<iostream>
#include<string>
#include"overnightpackage.h"
#include"package.h"
#include"twodaypackage.h"
using namespace std;
int main()
{
	package fedex("laptop", "60-b brooklyn", "lahore", "punjab", 8210, 12, 32);//testing for package type object
	fedex.display();
	cout<<"\n SHIPPING COST: "<<fedex.calculateCost();
	cout << "\n";

	OvernightPackage dhl(25,"Iphone x", "60-b brooklyn", "lahore", "punjab", 8210, 12, 10);//testing for overnightpackage type object
	dhl.display();
	cout << "\n SHIPPING COST: " << dhl.CalculateCost();
	cout << "\n";

	TwoDayPackage ups(25, "Iphone x", "60-b brooklyn", "lahore", "punjab", 8210, 12, 10);//testing for twodaypackage type object
	ups.display();
	cout << "\n SHIPPING COST: " << ups.calculateCost();

}