#include<iostream>
#include"task1.h"
using namespace std;

void personalData::setName(char n[])
{
	strcpy_s(name, n);
}
char* personalData::getName()
{
	return name;
}
void personalData::setAddress(char add[])
{
	strcpy_s(address, add);
}
char* personalData::getAddress()
{
	return address;
}
void personalData::setAge(int a)
{
	age = a;
}
int personalData::getAge()const
{
	return age;
}
void personalData::setPhoneNo(int n)
{
	phoneNo = n;
}
int personalData::getPhoneNo()const
{
	return phoneNo;
}