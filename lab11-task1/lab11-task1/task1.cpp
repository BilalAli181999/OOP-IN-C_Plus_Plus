#include "task1.h"

Employee::Employee(string & str, double t)
{
	name = str;
	taxRate = t;
}

string Employee::getName()
{
	return name;
}

double Employee::getTaxRate()
{
	return taxRate;
}
