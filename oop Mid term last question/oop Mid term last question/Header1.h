#ifndef HEADER1_H
#define HEADER1_H
#include<iostream>
#include"header.h"
using namespace std; 

class A
{
	int a;
public:
	A(int i=0)
	{
		cout << "\n para cons of A";
	}
	A(A & ref)
	{
		cout << "A::A(A& ref)";
	}
	void operator=(A& ref)
	{
		cout << "A::operator =(A& ref)";
	}
	A(B & ref)
	{
		cout << "A::A(B& ref)";
	}
	void operator=(B& ref)
	{
		cout << "A::operator =(B& ref)";
	}
	/*operator B()
	{
		cout << "operator A::B()";
	}*/

};


#endif