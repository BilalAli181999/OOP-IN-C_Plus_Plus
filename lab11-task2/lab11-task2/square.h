#ifndef SQUARE_H
#define SQUARE_H
#include<iostream>
#include"shape.h"
using namespace std;
class Square:public Shape
{
	double length;
public:
	Square(double l);
	double calcArea();
	void setLength(double l);
	double getLength();
};

#endif
