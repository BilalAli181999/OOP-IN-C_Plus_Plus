#include<iostream>
//#include"matrix.h"
#include"matrixOpertatorOverload.h"
using namespace std;
int main()
{

	Matrix a{ 2,3 }, b{ 2,2 };
	(a.at(0, 0)) = 39;
	(a.at(0, 1)) = 13;
	(a.at(0, 2)) = 90;
	(a.at(1, 2)) = 13;
	(a.at(1, 0)) = 1;
	(a.at(1, 1)) = 1;
	(b.at(0, 0)) = 1;
	(b.at(0, 1)) = 2;
	(b.at(1, 0)) = 2;
	(b.at(1, 1)) = 1;
	a.printMatrix();
	b.printMatrix();

	a.printMatrix();
	(a + (b)).printMatrix();
	Matrix s(2, 2);
	(a*(b)).printMatrix();
	s = a + (b);
	/*s=(a.add(b));
	a.printMatrix();
	b.printMatrix();*/
	s.printMatrix();
	Matrix c(a - b);
	c.printMatrix();
	cin >> a;
	cout <<"      \n"<< a;
}