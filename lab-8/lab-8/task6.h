#ifndef TASK5_H
#define TASK5_H
#include<iostream>
using namespace std;

class FuelGuage
{
private:
	int fuel;
public:
	FuelGuage()
	{
		fuel = 15;
	}
	void increment()
	{
		if (fuel < 15)
			fuel++;
		else
			cout << "\n Fuel is at its maximum level ";
	}
	void decrement()
	{
		if (fuel > 0)
			fuel--;
		else
			cout << "\n Fuel is at its minimum level";
	}
	int getFuel()
	{
		return fuel;
	}
};

class Odometer
{
private:
	FuelGuage fuel;
	int mileage;
public:
	Odometer()
	{
		mileage = 0;
	}

	void increment()
	{
		mileage++;
		if (mileage > 999999)

		{
			mileage = 0;
		}
	}
	void start()
	{
		int f = fuel.getFuel();
		for (int i = 0; i < f * 24; i++)
		{
			increment();
			if (mileage % 24 == 0)
			{
				
				fuel.decrement();
				cout << "\nFUEL:"<<fuel.getFuel();
				cout << "\nMILEAGE:" << mileage;
				cout << "\n";
			}
		}
	}
};

#endif