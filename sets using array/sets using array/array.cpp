#include<iostream>
#include"array.h"

using namespace std;

sarray::sarray()
{
	capacity = 5;
	data = new int[capacity];
}

sarray::sarray(int c)
{
	capacity = c;
	data = new int[capacity];
}



void sarray::setCapacity(int c)
{
	capacity = c;
}

int sarray::getCapacity()const
{
	return capacity;
}

int & sarray::at(int index)const
{
	return data[index];
}

int & sarray::operator[](int i)
{
	return data[i];
}

sarray::~sarray()
{
	delete[]data;
	data = 0;
}
