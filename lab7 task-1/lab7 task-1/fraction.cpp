#include"fraction.h"
#include<iostream>
using namespace std;

Fraction::Fraction(int n, int d)
{
	num = n;
	den = d;
	lcm(num, den);
}

void Fraction::lcm(int &n, int &d)
{
	bool sign1 = 0;
	bool sign2 = 0;
	if (n < 0)
	{
		n = -1 * n;
		sign1 = 1;
	}
	if (d < 0)
	{
		d = -1 * d;
		sign2 = 1;
	}
	int count = 0;
	if (n > d)
		count = d;
	if (n < d)
		count = n;
	for (int i = count; i > 0; i--)
	{
		if (n%i == 0 && d%i == 0)
		{
			n = n / i;
			d = d / i;
		}
	}
	if (sign1)
		n = n*-1;
	if (sign2)
		d = d*-1;

}

void Fraction::setNum(int n)
{
	num = n;

}

void Fraction::setDen(int d)
{
	den = d;
}

int Fraction::getNum()
{
	return num;
}

int Fraction::getDen()
{
	return den;
}

void Fraction::display()
{
	lcm(num, den);
	cout << num;
	cout << "/" << den << "\n";
}

Fraction Fraction::operator+(const Fraction & ref)
{
	Fraction temp;
	temp.num = (this->num*ref.den) + (this->den*ref.num);
	temp.den = this->den*ref.den;
	lcm(temp.num, temp.den);
	return temp;

}

Fraction Fraction::operator*(const Fraction & ref)
{
	Fraction temp;
	temp.num = this->num*ref.num;
	temp.den = this->den*ref.den;
	lcm(temp.num, temp.den);
	return temp;
}

Fraction Fraction::operator/(const Fraction & ref)
{
	Fraction temp;
	temp.num = this->num*ref.den;
	temp.den = this->den*ref.num;
	lcm(temp.num, temp.den);
	return temp;
}

Fraction Fraction::operator-(const Fraction &ref)
{
	Fraction temp;
	temp.num = (this->num*ref.den) - (this->den*ref.num);
	temp.den = this->den*ref.den;
	lcm(temp.num, temp.den);
	return temp;
}

void Fraction::operator+=(const Fraction & ref)
{
	this->num = (this->num*ref.den) + (this->den*ref.num);
	this->den = this->den*ref.den;
	lcm(this->num, this->den);
}

void Fraction::operator*=(const Fraction & ref)
{
	this->num = this->num*ref.num;
	this->den = this->den*ref.den;
	lcm(this->num, this->den);
}

void Fraction::operator/=(const Fraction & ref)
{
	this->num = this->num*ref.den;
	this->den = this->den*ref.num;
	lcm(this->num, this->den);
}

void Fraction::operator-=(const Fraction &ref)
{
	this->num = (this->num*ref.den) - (this->den*ref.num);
	this->den = this->den*ref.den;
	lcm(this->num, this->den);
}

bool Fraction::operator==(const Fraction & ref)
{

	if (num == ref.num && den == ref.den)
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator!=(const Fraction & ref)
{
	if (num != ref.num && den != ref.den)
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator<=(const Fraction & ref)
{
	Fraction temp1;
	Fraction temp2;
	temp1.num = this->num*ref.den;
	temp1.den = this->den*ref.den;
	temp2.num = ref.num*this->den;
	temp2.den = ref.den*this->den;
	if (temp1.num <= temp2.num)
		return true;
	else
		return false;


}

bool Fraction::operator>=(const Fraction & ref)
{
	Fraction temp1;
	Fraction temp2;
	temp1.num = this->num*ref.den;
	temp1.den = this->den*ref.den;
	temp2.num = ref.num*this->den;
	temp2.den = ref.den*this->den;
	if (temp1.num >= temp2.num)
		return true;
	else
		return false;

}

bool Fraction::operator<(const Fraction & ref)
{
	Fraction temp1;
	Fraction temp2;
	temp1.num = this->num*ref.den;
	temp1.den = this->den*ref.den;
	temp2.num = ref.num*this->den;
	temp2.den = ref.den*this->den;
	if (temp1.num < temp2.num)
		return true;
	else
		return false;

}

bool Fraction::operator>(const Fraction & ref)
{
	Fraction temp1;
	Fraction temp2;
	temp1.num = this->num*ref.den;
	temp1.den = this->den*ref.den;
	temp2.num = ref.num*this->den;
	temp2.den = ref.den*this->den;
	if (temp1.num > temp2.num)
		return true;
	return false;
}

Fraction Fraction::operator++()
{
	Fraction temp;
	temp.num = this->num + this->den;
	temp.den = this->den;
	lcm(temp.num, temp.den);
	return temp;
}

Fraction Fraction::operator--()
{
	Fraction temp;
	temp.num = this->num - this->den;
	temp.den = this->den;
	lcm(temp.num, temp.den);
	return temp;
}

Fraction Fraction::operator++(int)
{
	Fraction copy = (*this);
	Fraction temp;
	num = this->num + this->den;
	den = this->den;
	lcm(num, den);
	return copy;
}

Fraction Fraction::operator--(int)
{
	Fraction copy = (*this);

	num = this->num - this->den;
	den = this->den;
	lcm(num, den);
	return copy;
}

Fraction Fraction::operator-()
{
	Fraction temp;
	temp.num = (this->num)*-1;
	temp.den = (this->den)*-1;
	return (*this);
}

Fraction::operator double()
{
	double n, d;
	n = (double)num;
	d = (double)den;
	return n / d;
}

