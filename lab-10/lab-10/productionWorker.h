#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
class ProductionWorker:public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:
	ProductionWorker(int s, double pR, string n, int no);
	void setShift(int s);
	void setHourlyPayRate(double pR);
	void setEmployeeName(string n);
	void setNumber(int n);
	int getShift();
	double getHPR();
	int getNumber();
	string getName();
	void display();
};
#endif
