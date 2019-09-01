#include<iostream>
#include"fraction.h"
using namespace std;

int Fraction::GCD(int r, int c)
{
	if (r < c)
	{
		int temp = c;
		c = r;
		r = temp;
	}
	int rem = r%c;
	if (rem == 0)
		return c;
	GCD(c, rem);

}

void Fraction::reduceFraction()
{
	int div = GCD(numerator, denomirator);
	numerator = numerator / div;
	denomirator = denomirator / div;
}

Fraction::Fraction(int n, int d)
{

	if (n > 0)
		numerator = n;
	else
		numerator = 1;
	if (d > 1)
		denomirator = d;
	else
		denomirator = 1;
	this->reduceFraction();
}

void Fraction::display()
{
	cout << "\n" << numerator << "/" << denomirator;
}
Fraction Fraction::operator + (const Fraction &ref)
{
	Fraction temp;
	// cout << "ok";
	temp.numerator = (this->numerator*ref.denomirator) + (ref.numerator*this->denomirator);
	temp.denomirator = (this->denomirator*ref.denomirator);
	return temp;

}
Fraction Fraction::operator - (const Fraction &ref)
{
	Fraction temp;
	temp.numerator = (this->numerator*ref.denomirator) - (ref.numerator*this->denomirator);
	temp.denomirator = (this->denomirator*ref.denomirator);
	return temp;
}
Fraction Fraction::operator * (const Fraction &ref)
{
	Fraction temp;
	temp.numerator = (this->numerator*ref.numerator);
	temp.denomirator = (this->denomirator*ref.denomirator);
	return temp;
}
Fraction Fraction::operator / (const Fraction &ref)
{
	Fraction temp;
	temp.numerator = (this->numerator*ref.denomirator);
	temp.denomirator = (this->denomirator*ref.numerator);
	return temp;
}