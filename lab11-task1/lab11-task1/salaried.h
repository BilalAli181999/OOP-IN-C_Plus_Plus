#ifndef SALARIED_H
#define SALARIED_H
#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
class Salaried:public Employee
{
private:
	double salary;
public:
	Salaried(double s, string str, double t);
	double getSalary();
	void setSalary(double s);
	double calcSalary();
	void display();
};


#endif