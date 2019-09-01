#include<iostream>
using namespace std;
#include"car.h"
#include"bike.h"
#include"buliding.h"
void display(CarbonFootprint *ptr)
{
	cout << " CO2 EMISSION: ";
	cout << ptr->getCarbonFootprint();
}
int main()
{
	Building b(120,8,1.37,25,3.0,120.61);

	cout << "\n BUILDING's  ";
	display(&b);

	car c(300, 12.3, 9.7, 3.2);
	cout << "\n CAR'S  ";
	display(&c);

	Bike bike(3600, 1.3, 3.7, 1.2);
	cout << "\n BIKE'S  ";
	display(&bike);



}