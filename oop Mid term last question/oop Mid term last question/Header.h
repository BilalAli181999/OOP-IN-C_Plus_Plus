#ifndef HEADER_H
#define HEADEr_H
#include<iostream>
using namespace std;
//#include"header1.h"
class A;
class B
{
	int b;
public:
	B(int i=0)
	{
		cout << "\n para cons of B";
	}
	B(B & ref)
	{
		cout << "A::A(A& ref)";
	}
	void operator=(B& ref)
	{
		cout << "B::operator =(B& ref)";
	}
	B(A & ref)
	{
		cout << "B::B(A& ref)";
	}
	void operator=(A& ref)
	{
		cout << "B::operator =(A& ref)";
	}
	/*operator A()
	{
		cout << "operator B::A()";
	}*/
};

#endif
