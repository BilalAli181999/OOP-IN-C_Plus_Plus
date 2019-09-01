#include<iostream>
#include"set.h"
#include"array.h"
using namespace std;

int main()
{
	set a;
	set b;
		a.insert(1);
	a.insert(2);
		a.insert(7);
	 	a.insert(4);
		b.insert(4);
		b.insert(5);
		b.insert(7);
		b.insert(9);
		a.display();
		b.display();
		


		set intersection=a.calcIntersection(b);
	set unionSet =a.calcUnion(b);
		intersection.display();
		unionSet.display();
set symmetricDifference = a.CalcSymmetricDifference(b);
		symmetricDifference.display();

		set diffSet = a.calcDifference(b);
		diffSet.display();
}