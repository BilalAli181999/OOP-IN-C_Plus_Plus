#include "task2.h"

#include<iostream>
using namespace std;
Timeoff::Timeoff()
{
	strcpy_s(name, "unknown");
	this->id = 0;
	
}

Timeoff::Timeoff(char * n, int i,double msd, double st, double mV, double vT, double mU, double uT) :maxSickDays(msd), sickTaken(st), maxVacation(mV), vacationTaken(vT), maxUnpaid(mU), unpaidTaken(uT)
{
	this->id = i;
	strcpy_s(name, n);
	
}

void Timeoff::setName(char *n)
{
	strcpy_s(name, n);
}

void Timeoff::setId(int i)
{
	id =i;
}

char * Timeoff::getName()
{
	return name;
}

int Timeoff::getId()
{
	return id;
}

void Timeoff::setMaxSickDays(int s)
{
	
		maxSickDays.setHours(s);
	
}

void Timeoff::setSickTaken(int h)
{
	sickTaken.setHours(h);
}

void Timeoff::setMaxVacation(int v)
{
	if (v > 0 && v <= 240)
		maxVacation.setHours(v);
	else
		cout << "\n Max Vacation Allowed is out of Range ";
}

void Timeoff::setVacationTaken(int s)
{
	vacationTaken.setHours(s);
}

void Timeoff::setMaxUnpaid(int h)
{
	maxUnpaid.setHours(h);
}

void Timeoff::setUnpaidTaken(int v)
{
	unpaidTaken.setHours(v);
}

double Timeoff::getMaxSickDays()
{
	return maxSickDays.getDays();
}

double Timeoff::getsickTaken()
{
	return sickTaken.getDays();
}

double Timeoff::getMaxVacation()
{
	return maxVacation.getDays();
}

double Timeoff::getVacationTaken()
{
	return vacationTaken.getDays();
}

double Timeoff::getMaxUnpaid()
{
	return maxUnpaid.getDays();
}

double Timeoff::getUnpaidTaken()
{
	return unpaidTaken.getDays();
}



void Timeoff::display()
{
	cout << "\n EMPLOYEE NAME:" << name;
	cout << "\n EMPLOYEE id:" << id;
	cout << "\nMax Sick Days Allowed : ";
	cout<<getMaxSickDays();
	cout << "\n Sick Days Taken: "<< getsickTaken();

	cout << "\n Max Vacation Allowed : ";
	cout << getMaxVacation();
	cout << "\n  Vacation Taken: "<< getVacationTaken();
	
	cout << "\n Max Unpaid Allowed : ";
	cout << getMaxUnpaid();
	cout << "\n Unpaid Taken :"<<getUnpaidTaken();
	
}

void Timeoff::noOfMonths(int m)
{
	setMaxSickDays(m * 8);
	setMaxVacation(m * 12);
	cout << "\nMaximun Sick Days:" <<getMaxSickDays();
	cout << "\n Maximun Vacations:" << getMaxVacation();
}
