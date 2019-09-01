#include "productionWorker.h"

ProductionWorker::ProductionWorker(int s, double pR, string n, int no):Employee(n,no)
{
	shift = s;
	hourlyPayRate = pR;
}

void ProductionWorker::setShift(int s)
{
	shift = s;
}

void ProductionWorker::setHourlyPayRate(double pR)
{
	hourlyPayRate = pR;
}

void ProductionWorker::setEmployeeName(string n)
{
	Employee::setName(n);
}

void ProductionWorker::setNumber(int n)
{
	Employee::setNumber(n);
}

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getHPR()
{
	return hourlyPayRate;
}

int ProductionWorker::getNumber()
{
	return Employee:: getNumber();
}

string ProductionWorker::getName()
{
	return Employee::getName();
}

void ProductionWorker::display()
{
	Employee::display();
	if (shift == 1)
		cout << "\nSHIFT: MORNING";
	else if(shift==2)
		cout << "\nSHIFT: NIGHT";
	cout << "\n HOURLY PAY RATE: ";
	cout << hourlyPayRate;
}
