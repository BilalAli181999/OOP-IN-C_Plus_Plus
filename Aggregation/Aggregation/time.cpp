#include "time.h"
#include<iostream>
using namespace std;
time::time()
{
	sec = 0;
	min = 0;
	hour = 0;
	cout << "TIME DEFAULT\n";
}

void time::setSec(int s)
{
	sec=s;
}

time::time(int s, int m, int h)
{
	sec = s;
	min = m;
	hour = h;
	cout << "TIME PARAMETERIZED CONSTRUCTOR\n";
}

void time::displayTime()
{
	cout << hour << ":" << min << ":" << sec;
}

time::~time()
{
	cout << "TIME DESTRUCTOR\n";
}
