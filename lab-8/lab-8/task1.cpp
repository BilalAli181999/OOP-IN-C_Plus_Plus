#include "task1.h"
#include<iostream>
using namespace std;
Numdays::Numdays()
{
	hours = 8;
	days = hours / 8.0;
}

Numdays::Numdays(double h)
{
	hours = h;
	days = hours / 8.0;
}

void Numdays::setHours(double h)
{
	hours = h;
	days = hours / 8.0;
}

double Numdays::getHours()
{
	return hours;
}

double Numdays::getDays()
{
	return days;
}

void Numdays::display()
{
	cout << "\n hours:" << hours;
	cout << "\n Days:" << days;
}

double Numdays::operator+(Numdays & ref)
{
	double sumOfHours;
	sumOfHours = this->hours + ref.hours;
	return sumOfHours;
}

double Numdays::operator-(Numdays & ref)
{
	double subOfHours;
	subOfHours = this->hours - ref.hours;
	return subOfHours;
}

Numdays Numdays::operator++()
{
	this->hours++;
	this->days = hours / 8.0;
	return *this;
}

Numdays Numdays::operator++(int)
{
	Numdays copy = *this;
	this->hours++;
	this->days = hours / 8.0;
	return copy;
}

Numdays Numdays::operator--()
{
	this->hours--;
	this->days = hours / 8.0;
	return *this;
}

Numdays Numdays::operator--(int)
{
	Numdays copy = *this;
	this->hours--;
	this->days = hours / 8.0;
	return copy;
}
