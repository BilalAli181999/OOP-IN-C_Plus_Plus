#include"Orderedpair.h"
#include<iostream>
using namespace std;
OrderedPair::OrderedPair(int n , int m )
{
	a = n;
	b = m;
}

int OrderedPair::getElementA() const
{
	return a;
}

int OrderedPair::getElementB() const
{
	return b;
}

void OrderedPair::setElementA(int a)
{
	this->a = a;
}

void OrderedPair::setElementB(int b)
{
	this->b = b;
}

bool OrderedPair::areUnique( int d)
{
	if(a==d)
	{
		if (a == b)
			return true;
		else
			return false;
	}
	return false;
}


void OrderedPair::print()
{
	cout << "(" << a << "," << b << ")";
}

bool OrderedPair::isEqual(const OrderedPair & ref) const
{
	if (this->a == ref.a && this->b == ref.b)
	{
		return true;
	}
	else
		return false;
}
