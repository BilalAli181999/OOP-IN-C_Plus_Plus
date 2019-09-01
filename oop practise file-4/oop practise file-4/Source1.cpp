#include<iostream>
#include"matrix.h"
using namespace std;
int main()
{
	matrix m,a;
	m.at(0, 0) = 1;
	m.at(0, 1) = 3;
	m.at(0, 2) = 6;
	m.at(1, 0) = 4;
	m.at(1, 1) = 1;
	m.at(1, 2) = 3;
	m.at(2, 0) = 3;
	m.at(2, 1) = 3;
	m.at(2, 2) = 13;
	a.at(0, 0) = 1;
	a.at(0, 1) = 8;
	a.at(0, 2) = 8;
	a.at(2, 0) = 9;
	a.at(2, 1) = 1;
	a.at(1, 0) = 1;
	a.at(1, 1) = 8;
	a.at(1, 2) = 9;
	a.at(2, 2) = 1;
	a.printMatrix();
	m.printMatrix();

	//matrix transpose = a.transpose();
	matrix sum = m.add(a);
//	sum.printMatrix();
	return 0;
}