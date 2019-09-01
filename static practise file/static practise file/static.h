#include<iostream>
using namespace std;
class cmath
{
public:
	static float calcPowr(int base, int exponent);
	static int calcGcd(int numerator, int denominator);

};

float cmath::calcPowr(int base, int exponent)
{
	int power = 1;
	for (int i = 0; i < exponent; i++)
	{
		power = power*base;
	}
	return power;
}

int cmath::calcGcd(int numerator, int denominator)
{
	int count=0;
	int gcd=0;
	if (numerator < denominator)
	{
		count = numerator;
	}
	else if(denominator<numerator)
	{
		count = denominator;
	}

	
	for (int i = count; i >1; i--)
	{
		
		if (numerator%i == 0 && denominator%i == 0)
		{
			gcd= i;
		}
	}
	
	return gcd;
}
#pragma once
