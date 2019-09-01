#ifndef TASK5_H
#define TASK5_H
#include<iostream>
class ParkingMeter;
class ParkingTicket;
class PoliceOfficer;
class ParkedCar
{
private:
	char carMake[50];
	char model[50];
	char color[50];
	int licenceNo;
	double minParked;
public:
	ParkedCar(char*cM, char*m, char*c, int lN, double mP)
	{
		strcpy_s(carMake, cM);
		strcpy_s(color, c);
		strcpy_s(model, m);
		licenceNo = lN;
		minParked = mP;
	}
	void display()
	{
		cout << "\n CAR MAKE: ";
		cout << carMake;
		cout << "\n MODEL: ";
		cout << model;
		cout << "\n COLOR: ";
		cout << color;
		cout << "\n LICENCE NUMBER: ";
		cout << licenceNo;
		cout << "\n MINUTES CAR PARKED: ";
		cout << minParked;

	}
	void setCarMake(char*cM)
	{
		strcpy_s(carMake, cM);
	}
	void setModel(char*m)
	{
		strcpy_s(model, m);
	}
	void setColor(char*c)
	{
		strcpy_s(color, c);
	}
	void setLicenceNo(int lN)
	{
		licenceNo = lN;
	}
	void setMinParked(double mP)
	{
		minParked = mP;
	}
	char* getCarMake()
	{
		return carMake;
	}
	char* getModel()
	{
		return model;
	}
	char* getColor()
	{
		return color;
	}
	int getLicenceNo()
	{
		return licenceNo;
	}
	double getMinParked()
	{
		return minParked;
	}
};

class ParkingMeter
{
private:
	double parkingTime;
public:
	ParkingMeter()
	{
		int pT;
		cout << "\n Enter the time you want for parking";
		cin >> pT;
		parkingTime=pT ;
	}
	double getParkingTime()
	{
		return parkingTime;
	}
};

class ParkingTicket
{
public:
	ParkedCar car;
	ParkingMeter pM;
	double fine;
public:
	ParkingTicket(char*cM, char*m, char*c, int lN, double mP) :car(cM, m, c, lN, mP)
	{
		fine = 25;
		double hours;
		hours=(car.getMinParked()/60)-(pM.getParkingTime()/60);
		if (hours>0 && hours <= 1)
			fine = 25;
		else if (hours > 1)
		{
			for (int i = 1; i < hours; i++)
			{
				fine = fine + 10;
			}
		}
	}
	void display()
	{
		car.display();
	}
	double getMinParked()
	{
		return car.getMinParked();
	}
	double getFine()
	{
		return fine;
	}
};

class PoliceOfficer
{
private:
	char policeName[50];
	int badgeNo;
	ParkingTicket pT;

public:
	PoliceOfficer(char*cM, char*m, char*c, int lN, double mP, char*pN, int bN ) :pT(cM, m, c, lN, mP)
	{
		strcpy_s(policeName, pN);
		badgeNo = bN;
		if (pT.getMinParked() > pT.pM.getParkingTime())
		{
			display();
		}
		else
			cout << "\n Car parking is legal";
	}
	void display()
	{
		cout << "\n Police Officer's Name: ";
		cout << policeName;
		cout << "\n Police Officer's Badge Number: ";
		cout << badgeNo;
		pT.display();
		cout << "\n FINE: : ";
		cout << pT.getFine();
	}
};

#endif