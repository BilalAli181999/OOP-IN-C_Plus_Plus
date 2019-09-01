#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>
using namespace std;
#include<string>
#include"employee.h"
#include"person.h"
class Teacher:public Person ,public Employee
{
private:
	int payScale;
public:
	Teacher(int pS, string n, int a, string eN, int w):Person(n,a),Employee(eN,w)
	{
		payScale = pS;
	}
	
	void setEmployeeName(string n)
	{
		Employee::setEmployeeName(n);
	}
	void setWage(int a)
	{
		Employee::setWage(a);
	}
	string getEmployeeName()
	{
		return Employee::getEmployeeName();
	}
	int getWage()
	{
		return Employee::getWage();
	}
	void setName(string n)
	{
		Person::setName(n);
	}
	void setAge(int a)
	{
		Person::setAge(a);
	}
	string getName()
	{
		return Person::getName();;
	}
	int getAge()
	{
		return Person::getAge();
	}
	int getPayScale()
	{
		return payScale;
	}
	void display()
	{
		cout << "\n Name: ";
		cout << getName();
		cout << "\n Age: ";
		cout << getAge();
		cout << "\n Name of Employeer: ";
		cout << getEmployeeName();
		cout << "\n Wage: ";
		cout << getWage();
		cout << "\n PayScale: ";
		cout << getPayScale();

	}
};


#endif