#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
using namespace std;
#include<string>
class Employee
{
private:
	string employeeName;
	int wage;
public:
	Employee(string eN, int w)
	{
		employeeName = eN;
		wage = w;
	}
	void setEmployeeName(string n)
	{
		employeeName = n;
	}
	void setWage(int a)
	{
		wage = a;
	}
	string getEmployeeName()
	{
		return employeeName;
	}
	int getWage()
	{
		return wage;
	}
};



#endif