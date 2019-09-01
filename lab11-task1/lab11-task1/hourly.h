#ifndef HOURLY_H
#define HOURLY_H
#include<iostream>
#include<string>
#include"task1.h"
using namespace std; 
class Hourly:public Employee
{
private:
	double hourlySalary;
	int noOfHours;
public:
	Hourly(double h,int noH, string str, double t);
	void setHourlySalary(double h);
	void setNoOfHours(int h);
	double calcSalary();
	void display();
};


#endif