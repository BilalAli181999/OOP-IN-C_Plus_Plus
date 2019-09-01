#include "date.h"
#include<iostream>
using namespace std;
date::date()
{
	day = 0;
	month = 0;
	year = 0;
	cout << "DATE DEFAULT\n";
}

date::date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
	cout << "DATE PARAMETERIZED CONSTRUCTOR\n";
}

void date::displayDate()
{
	cout << day << "/" << month << "/" << year;
}

date::~date()
{
	cout << "DATE DESTRUCTOR\n";
}
