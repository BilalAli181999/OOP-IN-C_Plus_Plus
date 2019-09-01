#include "complex.h"
#include<iostream>
using namespace std;
Complex::Complex(double r,double i)
{
	real = r;
	imaginary = i;
	
}

void Complex::display()
{
	cout << this->real << "+(" << this->imaginary << ")i\n";
}

Complex Complex:: operator+(const Complex &ref)
{
	Complex temp;
	temp.real = this->real + ref.real;
	temp.imaginary = this->imaginary + ref.imaginary;
	return temp;
}

Complex Complex:: operator-(const Complex & ref)
{
	Complex temp;
	temp.real = this->real - ref.real;
	temp.imaginary = this->imaginary - ref.imaginary;
	return temp;
}

Complex Complex:: operator*(const Complex & ref)
{
	Complex temp;
	temp.real = ((this->real)*(ref.real)) - ((this->imaginary)*(ref.imaginary));
	temp.imaginary = ((this->imaginary)*(ref.real)) + ((this->real)*(ref.imaginary));
	return temp;

}

Complex Complex::operator/(const Complex & ref)
{
	Complex temp;
	temp.real = (((this->real)*(ref.real)) + ((this->imaginary)*(ref.imaginary))) / (pow(ref.real, 2) + pow(ref.imaginary, 2));
	temp.imaginary = (((this->imaginary)*(ref.real)) - ((this->real)*(ref.imaginary))) / (pow(ref.real, 2) + pow(ref.imaginary, 2));
	return temp;
}

Complex Complex::operator++()
{
	this->real++;
	this->imaginary++;
	return (*this);
}

Complex Complex::operator++(int)
{
	Complex temp;
	temp = (*this);
	this->real++;
	this->imaginary++;
	return temp;

}

Complex Complex::operator--()
{
	this->real--;
	this->imaginary--;
	return (*this);
}

Complex Complex::operator--(int)
{
	Complex temp;
	temp = (*this);
	this->real--;
	this->imaginary--;
	return temp;
}
