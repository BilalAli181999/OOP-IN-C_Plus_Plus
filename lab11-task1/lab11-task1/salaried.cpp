#include "salaried.h"

Salaried::Salaried(double s,string str,double t):Employee(str,t)
{
	salary = s;
}


double Salaried::getSalary()
{
	return salary;
}

void Salaried::setSalary(double s)
{
	if(s>0)
	salary = s;
}

double Salaried::calcSalary()
{
	double sal;
	sal = (12 * salary)-getTaxRate();
	return sal;
	
}

void Salaried::display()
{
	cout << "\n Name of Employee: " << getName();
	cout << "\n Monthly Salary of Employee: " << salary;
	cout << "\n Yearly TaxRate of Employee: " << getTaxRate();
	cout << "\n Yearly Salary  of Employee: " << calcSalary();

}
