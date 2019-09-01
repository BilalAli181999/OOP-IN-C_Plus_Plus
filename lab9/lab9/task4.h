#ifndef TASK4_H
#define TASK4_H
#include<iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;
public:
	Date(int day = 0, int month = 0, int year = 0)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void operator ++()
	{
		day++;
	
		if (day > 30 && month != 12)
		{
			day = 1;
			month++;
		}
		else if (day >31 && month == 12)
		{
			day = 1;
			month = 1;
			year++;
		}
	}
	void operator ++(int )
	{
		day++;
		if (day > 30 && month!=12)
		{
			day = 1;
			month++;
		}
		else if (day >31 && month == 12)
		{
			day = 1;
			month = 1;
			year++;
		}

	}
	void operator --()
	{
		
		day--;
		if (day == 0 && month != 1)
		{
			day = 30;
			month--;
		}
		else if (day == 0 && month == 1)
		{

			day = 31;
			month = 12;
			year--;
		}
	}
	void operator --(int )
	{
		
		day--;
		if (day == 0 && month!=1)
		{
			day = 30;
			month--;
		}
		else if (day == 0 && month == 1)
		{
			
			day = 31;
			month = 12;
			year--;
		}
	}
	int operator-(Date & ref)
	{
		int diff;
		diff = this->day - ref.day;
		if (diff < 0)
		{
			diff = -1 * diff;
		}
		return diff;
	}
	friend ostream & operator<<(ostream & str, Date &ref);
	friend istream & operator>>(istream & str, Date &ref);
	
};

#endif
