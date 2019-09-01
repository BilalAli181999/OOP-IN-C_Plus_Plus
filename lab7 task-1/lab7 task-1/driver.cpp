#include<iostream>
#include"fraction.h"
using namespace std;


ostream& operator <<(ostream &ostr, Fraction & ref)
{
	ostr  << ref.den<<"\n ";
	ostr << ref.getNum();
	return ostr;
}
istream& operator >>(istream &ostr, Fraction & ref)
{
	ostr >> ref.den;
	ostr >> ref.num;
	return ostr;
}
int main()
{
	Fraction f1(5,7);
	cin >> f1;
	cout << f1;
//	f1.display();
//	Fraction f2(7, 9);
//	f2.display();
//	Fraction sum = f1 + f2;
//	sum.display();
//	Fraction prod;
//	prod = f1*f2;
//	prod.display();
//	Fraction div;
//	div = f1 / f2;
//	div.display();
//	Fraction sub;
//	sub = f1 - f2;
//	sub.display();
//	f1 +=f2 ;
//	f1.display();
//	f1 *= f2;
//	f1.display();
//	f1 /= f2;
//	f1.display();
//	f1 -= f2;
//	f1.display();
////	f1 = Fraction(7, 9);
//	if (f1 == f2)
//		cout << "\nFRACTIONS ARE EQUAL\n";
//	if (f1 != f2)
//		cout << "\nFRACTIONS ARE NOT EQUAL\n";
//	if (f1 <= f2)
//		cout << "\nF1 is <= f2\n";
//	if (f1 >= f1)
//		cout << "\nF1 is >= f2\n";
//	if (f1 < f2)
//		cout << "\nF1 is < f2\n";
//	if (f1 > f2)
//		cout << "\nF1 is > f2\n";
//	cout << "Value of f1:";
//	f1.display();
//	f1 = ++f1;
//	f1.display();
//	f1 = --f1;
//	f1.display();
//	Fraction inc, dec;
//	
//	inc = f1++;
//	f1.display();//
//	inc.display();
//	dec = f1--;
//	dec.display();
//	f1.display();//
//
//	f1 = -f2;
//	f1.display();
//	f1 = Fraction(123,4 );
//	double v;
//	v = f1;
//	cout << v;
}