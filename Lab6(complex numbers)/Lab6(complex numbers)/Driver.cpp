#include<iostream>
#include"complex.h"
using namespace std;
int main()
{
	Complex a(9, 4);
	cout << "\nA:\t\n";
	a.display();
	Complex b(4, 4);
	cout << "\nB:\t\n";
	b.display();
	//Complex sum;
	//sum = a + b;
	//cout << "\nSum:\t\n";
	//sum.display();
	//Complex sub;
	//sub = a - b;
	//cout << "\nSubtraction:\t\n";
	//sub.display();
	//Complex mul;
	//mul = a * b;
	//cout << "\nMultiplication:\t\n";
	//mul.display();
	//Complex div;
	//div = a / b;
	//cout << "\nDivision:\t\n";
	//div.display();

	Complex new1, new2;
	new1 = a--;
	new1.display();
	new2 = --b;
	a.display();
}

using namespace std;
