#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>
using namespace std;
class Fraction;
//ostream& operator <<(ostream &ostr, Fraction & ref);

class Fraction
{
private:
	int num;
	int den;
public:
	explicit Fraction(int n = 1, int d = 1);
	void lcm(int &n, int &d);
	void setNum(int n);
	void setDen(int d);
	int getNum();
	int getDen();
	void display();
	Fraction operator +(const Fraction &);
	Fraction operator *(const Fraction &);
	Fraction operator /(const Fraction &);
	Fraction operator -(const Fraction &);
	void operator += (const Fraction &);
	void operator *= (const Fraction &);
	void operator /= (const Fraction &);
	void operator -= (const Fraction &);
	bool operator ==(const Fraction &);
	bool operator !=(const Fraction &);
	bool operator <=(const Fraction &);
	bool operator >=(const Fraction &);
	bool operator <(const Fraction &);
	bool operator >(const Fraction &);
	Fraction operator++();
	Fraction operator--();
	Fraction operator++(int);
	Fraction operator--(int);
	Fraction operator-();
	operator double();
	friend ostream& operator <<(ostream &ostr, Fraction & ref);
	friend istream& operator >>(istream &ostr, Fraction & ref);
};








#endif