#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;
#include<string>
class Person
{
private:
	string name;
	int age;
public:
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	void setName(string n)
	{
		name = n;
	}
	void setAge(int a)
	{
		age = a;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
};

#endif
