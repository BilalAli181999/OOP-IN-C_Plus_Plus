#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
private:
	double real;
	double imaginary;
	
public:
	Complex(double=0.0,double=0.0);
	void display();
	Complex operator+(const Complex &ref);
	Complex operator-(const Complex &ref);
	Complex operator*(const Complex &ref);
	Complex operator/(const Complex &ref);
	Complex operator++();
	Complex operator++(int);
	Complex operator--();
	Complex operator--(int);


};


#endif