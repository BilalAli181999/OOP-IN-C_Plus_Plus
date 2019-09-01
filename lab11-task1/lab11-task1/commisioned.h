#ifndef COMMISIONED_H
#define COMMISIONED_H
#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
class Commisioned:public Employee
{
private:
	double monthlySalary;
	double monthlyBonus;
public:
	Commisioned(double mS, double mB, string str, double t);
	double calcSalary();
	void display();
};

#endif
