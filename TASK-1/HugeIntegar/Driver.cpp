//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include<iostream>
using namespace std;
#include"HugeInteger.h"
ostream& operator<<(ostream &str, HugeInteger &ref)
{
	

	int i =40- ref.noOfDigits;
	while(i<=39)
	{
		str << ref.digit[i];
		i++;
	}
	
	return str;
}
istream& operator>>(istream &str, HugeInteger &ref)//enter 1 digit for each ref.digit[i] and press enter for inputting next variable
{
	char arr[40];
	cin >> arr;
	int n=0;
	while (arr[n] != '\0')	
	{
		n++;
	}
	int c = 40 - n;
	for (int i = 0; i < n; i++)
	{
	
		ref.digit[c] = (int)arr[i] - 48;
		ref.noOfDigits++;
		c++;
		
	}
	return str;
}

int main()
{
	HugeInteger h1,h2,sum,sub;
	
	cout << "\n Enter 1st digit:";
	cin >> h1; //use them for input on your own
	cout << "\n Enter 2nd digit:";
	cin >> h2;
	cout << "\n 1st digit: ";
	cout << h1;
	cout << "\n 2nd digit: ";
	cout << h2;
	//sum = h1 + h2;
	//cout << "\n Sum";
	//cout << sum;
	//sub = h1 - h2;
	//cout << "\n Subtraction";
	//cout << sub;
	//if (h1 == h2)
	//	cout << "\n Equal";
	//if(h1!=h2)
	//	cout << "\n Not Equal";
	//if (h1 >h2)
	//	cout << "\n H1 is  greater";
	//if (h1 <h2)
	//	cout << "\n H1 is  smaller";
	//if (h1 <=h2)
	//	cout << "\n H1 is  smaller or equal";
	//if (h1 >= h2)
	//	cout << "\n H1 is  greate or equal";
	//

	HugeInteger multiply;
	multiply = h1*h2;
	multiply.noOfDigits = h1.noOfDigits + h2.noOfDigits;
	cout <<"\nMULTIPLICATION: "<< multiply;

}