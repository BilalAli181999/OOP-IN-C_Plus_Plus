//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#ifndef  HUGEINTEGER_H
#define HUGEINTEGER_H
#include<iostream>
using namespace std;
class HugeInteger
{
public:
	int *digit;
	int noOfDigits;
	public:
		HugeInteger();

		int & operator[](int index);
		friend ostream& operator<<(ostream &str, HugeInteger &ref);
		friend istream& operator>>(istream &str, HugeInteger &ref);
		HugeInteger operator+(HugeInteger &ref);
		HugeInteger operator-(HugeInteger &ref);
		bool operator==(HugeInteger &ref);
		bool operator!=(HugeInteger &ref);
		bool operator>(HugeInteger &ref);
		bool operator<(HugeInteger &ref);
		bool operator<=(HugeInteger &ref);
		bool operator>=(HugeInteger &ref);
		bool isZero();
		HugeInteger operator*(HugeInteger &ref);
		HugeInteger operator/(HugeInteger &ref);
		HugeInteger operator%(HugeInteger &ref);
};

#endif