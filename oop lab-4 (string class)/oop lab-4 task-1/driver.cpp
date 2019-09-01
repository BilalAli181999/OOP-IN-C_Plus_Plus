#include<iostream>
#include"cstring.h"
using namespace std;
int main()
{
	
	char ch1[50];
	cout << "Enter string 1: ";
	cin.getline(ch1, 50);
	cstring s1(ch1);
	//cin >> s1;
	//cout << s1;
	char ch2[50];
	cout << "Enter string 2: ";
	cin.getline(ch2, 50);
//	char ch3[50];
//	cout << "Enter string 3: ";
	//cin.getline(ch3, 50);
//	s1.display();
	cout << "\n";
//	s1.replace(ch2,ch3);
//	s1.display();
	cstring s2(ch2);




	if ((s1==ch2 )== 1)
	{
		cout << s1;
		cout<< "  is greater\n";
	}
	if ((s1 == ch2) == 2)
	{
		cout << ch2;
		cout<< "is greater\n";
	}
	if ((s1 == ch2) == 0)
		cout << "both are equal"; 


	cout << "\n Testing []operator:";
	cout << s1[2];

	if ((!s1) == 0)
		cout << "\n EMPTY";
	else 
		cout<< "\n NON EMPTY";
	cout << "\n";
	cstring temp = s1(2, 6);
cout << temp;
	







	/*s2.display();
	s2.reverse();
	
	s2.display();*/
	/*cstring concatinate;
	concatinate = s1 + s2;
	concatinate.display();
	cout << "\n";
	cstring concatisEqual;
	concatisEqual = s1 + ch2;
	
	concatisEqual.display();

	s1 += s2;
	cout << "\n***CONCATENATED IN SET-1***";
	
	s1.display();
	cout << "\n***CONCATENATED IN SET-2***";
	s2 += ch1;
	s2.display();
*/
/*
	cstring s1(ch1);
	
	cout << "\nSTRING-1:";
	s1.display();
	cout << "\n";

	s1.trim();
	cout << "\ntrimmed:";
		s1.display();

	s1.reverse();
	cout << "\nreversed:";
	s1.display();
	cout << "\n";


	s1.makeUpper();
	cout << "\n upper case";
	s1.display();

	s1.makeLower();
	cout << "\n lower case";
	s1.display();
	s1.reverse();
	cout << "\n1-string now:";
	s1.display();
	cout << "\n2-string now:";
	s2.display();
	cout<<"\nIndex of substring: "<<s1.find(ch2);

	cout << "\nIndex of charachter: " << s1.find('n');

	cout << "concatenated:";
	cstring conc=s1.concatenate(s2);
	cout << "\n concate equal:";

	s1.concatEqual(s2);
	s1.display();
	cout << "\n insert:";
	s1.insert(3, ch2);
	cout << "\ninsert char string:";
	s1.display();*/
	/*

	cout<<"size of new array"<<s2.insert(3, 'm');
	cout << "\n";
	s2.display();
	
*/

	/*if (s1.isEqual(s2)==1)
	{
		cout << s1.getData() << "is greater\n";
	}
	if (s1.isEqual(s2) == 2)
	{
		cout << s2.getData() << "is greater\n";
	}
	if (s1.isEqual(s2) == 0)
		cout << "both are equal";*/



	//if (s1.isEqual(ch2) == 1)
	//{
	//	cout << s1.getData() << " is greater\n";
	//}
	//if (s1.isEqual(ch2) == 2)
	//{
	//	cout << s2.getData() << " is greater\n";
	//}
	//if (s1.isEqual(ch2) == 0)
	//	cout << "both are equal";
}