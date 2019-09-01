#ifndef TASK4_H
#define TASK4_H
#include<iostream>
using namespace std;
class roomDim;
class roomCarpet;
class Feet
{
private:
	int noF;
public:
	Feet(int i = 0)
	{
		
		noF = i;
		
	}
	int getNoF()
	{
		return noF;
	}

};
class roomDim
{
private:
	Feet length;
	Feet width;
public:
	roomDim(int l = 0, int w = 0) :length(l), width(w)
	{
		
	}
	int squareFeet()
	{
		int sqf = length.getNoF()*width.getNoF();
		
		return sqf;
	}
	
};
class roomCarpet
{
private:
	double costPsqf;
	roomDim room;
public:
	roomCarpet(int coP = 2, int l = 1, int w = 1) :room(l, w),costPsqf(coP)
	{
		
	}
	double costOfCarpet()
	{
		
		return room.squareFeet()*costPsqf;
	}
};
#endif