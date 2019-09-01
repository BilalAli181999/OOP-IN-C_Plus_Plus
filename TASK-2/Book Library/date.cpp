//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "date.h"
#include<iostream>
using namespace std;
Date::Date()
{
	day = 1;
	month = 1;
	year = 2017;
}

Date::Date(int d, int m, int y)
{

	day = d;
	month = m;
	year = y;
}

void Date::display()
{
	cout << day << "/" << month << "/" << year;
}
