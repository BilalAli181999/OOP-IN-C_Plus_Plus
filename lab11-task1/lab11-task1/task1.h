#ifndef TASK1_H
#define TASK1_H
#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
	string name;
	double taxRate;
public:
	Employee(string & str, double t);
	string getName();
	double getTaxRate();
	virtual double calcSalary() = 0;
	virtual void display() = 0;

};

#endif