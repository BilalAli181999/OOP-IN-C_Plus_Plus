//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "package.h"

package::package()
{
	name = "Iphone X";
	address = "60-B Manhattan";
	city = "New York City";
	state = "New York";
	zipCode = 8210;
	weight = 12;
	costPerOunce = 10;

}

package::package(string n, string a, string c, string s, int zC, double w, double cpo)
{
	name = n;
	address = a;
	city = c;
	state = s;
	zipCode = zC;
	if (w>0)
		weight = w;
	else
		cout << "\n Negative value entered. ";//to prevent from negative values
	if (cpo > 0)
		costPerOunce = cpo;
	else
		cout << "\n Negative value entered. ";//to prevent from negative values
}

double package::calculateCost()
{
	double cost;
	cost = costPerOunce*weight;
	return cost;
}

void package::setName(string n)
{
	name = n;
}

void package::setAddress(string a)
{
	address = a;

}

void package::setCity(string c)
{
	city = c;
}

void package::setState(string s)
{
	state = s;
}

void package::setZipcode(int z)
{
	zipCode = z;
}

void package::setWeight(double w)
{
	if(w>0)
	weight = w;
	else
		cout << "\n Negative value entered. ";//to prevent from negative values
}

void package::setCpO(double cpo)
{
	if (cpo > 0)
		costPerOunce = cpo;
	else
		cout << "\n Negative value entered. ";//to prevent from negative values
}

string package::getName()
{
	return name;
}

string package::getAddress()
{
	return address;
}

string package::getCity()
{
	return city;
}

string package::getState()
{
	return state;
}

int package::getZipCode()
{
	return zipCode;
}

double package::getWeight()
{
	return weight;
}

double package::getCpO()
{
	return costPerOunce;
}

void package::display()
{
	cout << "\n NAME OF PACKAGE:"<<name;
	cout << "\n ADDRESS:" << address;
	cout << "\n CITY NAME:" << city;
	cout << "\n NAME OF STATE:" << state;
	cout << "\n ZIP CODE:" << zipCode;
	cout << "\n WEIGHT:" << weight;
	cout << "\n COST PER OUNCE:" << costPerOunce;
	
}
