#include "task1.h"
#include<iostream>
using namespace std;
#include<string>
Employee::Employee(string n, int no)
{
	number = no;
	Name = n;
}

void Employee::setNumber(int no)
{
	number = no;
}

void Employee::setName(string n)
{
	Name = n;
}

int Employee::getNumber()
{
	return number;
}

string Employee::getName()
{
	return Name;
}

void Employee::display()
{
	cout << "\n EMPLOYEE NAME: ";
	cout<< Name;
	cout << "\nEMPLOYEE NUMBER: ";
	cout << number;

}
