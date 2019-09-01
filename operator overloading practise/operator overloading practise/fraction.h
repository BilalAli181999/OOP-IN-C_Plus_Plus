#include<iostream>
#include"complex.h"
using namespace std;


class fraction
{
public:
	int num;
	int den;
public:
	fraction(int n = 0, int d = 0)
	{
		cout << "\nCONSTRUCTOR";
		num = n;
		den = d;
	}
	fraction(fraction &ref)
	{
		cout << "\n COPY CONSTRUCTOR";

	}
	void operator=(fraction & ref)
	{
		cout << "\n= OPERATOR";
		this->num = ref.num;
		this->den = ref.den;
	}
	operator double()
	{
		cout << "\n DOUBLE OPERATOR";
		return num;
	}
	operator int()
	{
		cout << "\n INT OPERATOR";
		return den;
	}
	operator char()
	{
		cout << "\n CHAR OPERATOR";
		return den;
	}
	fraction operator =(complexNum & ref)
	{
		cout << "\nf=c";
		this->num = ref.i;
		this->den = ref.r;
		return *this;
	}
};