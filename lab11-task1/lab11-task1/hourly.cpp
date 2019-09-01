#include "hourly.h"

Hourly::Hourly(double h,int noH, string str, double t):Employee(str,t)
{
	hourlySalary = h;
	noOfHours = noH;
}

void Hourly::setHourlySalary(double h)
{
	hourlySalary = h;
}

void Hourly::setNoOfHours(int h)
{
	noOfHours = h;
}

double Hourly::calcSalary()
{
	double sal = ((noOfHours*hourlySalary) * 12) - getTaxRate();
	return sal;
}

void Hourly::display()
{
	cout << "\n Name of Employee: " << getName();
	cout << "\n Hourly Salary of Employee: " << hourlySalary;
	cout << "\n  No of Hours of Employee: " <<noOfHours;
	cout << "\n Yearly TaxRate of Employee: " << getTaxRate();
	cout << "\n Yearly Salary  of Employee: " << calcSalary();
}
