#include "commisioned.h"

Commisioned::Commisioned(double mS, double mB, string str, double t):Employee(str,t)
{
	monthlySalary = mS;
	monthlyBonus = mB;
}

double Commisioned::calcSalary()
{
	double sal = (monthlySalary * 12) + (monthlyBonus * 12) - getTaxRate();
	return sal ;
}

void Commisioned::display()
{
	cout << "\n Name of Employee: " << getName();
	cout << "\n Monthly Salary of Employee: " << monthlySalary;
	cout << "\n Monthly Bonus of Employee: " << monthlyBonus;
	cout << "\n Yearly TaxRate of Employee: " << getTaxRate();
	cout << "\n Yearly Salary  of Employee: " << calcSalary();
}
