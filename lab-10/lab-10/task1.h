#ifndef TASK1_H
#define TASK1_H
#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
	string Name;
	int number;
public:
	Employee(string n, int no);
	void setNumber(int no);
	void setName(string n);
	int getNumber();
	string getName();
	void display();
};

#endif
