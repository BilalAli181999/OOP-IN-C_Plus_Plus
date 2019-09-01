#include<iostream>
#include"fraction.h"
using namespace std;

class complexNum
{
public:
	double i;
	double r;
public:
	complexNum(int n = 0, int d = 0)
	{
		cout << "\nCONSTRUCTOR";
		i = n;
		r = d;
	}
	complexNum(fraction &ref)
	{
		cout << "\n COPY CONSTRUCTOR";

	}
	void operator=(complexNum & ref)
	{
		cout << "\n= OPERATOR";
		this->i = ref.i;
		this->r = ref.r;
	}
	operator double()
	{
		cout << "\n DOUBLE OPERATOR";
		return i;
	}
	operator int()
	{
		cout << "\n INT OPERATOR";
		return r;
	}
	operator char()
	{
		cout << "\n CHAR OPERATOR";
		return r;
	}
	complexNum operator= (fraction &ref)
	{
		cout << "\nC1=F";
		this->i = ref.num;
		this->r = ref.den;
		return *this;
	}
};
