#include<iostream>
#include"task1.h"
using namespace std;
int main()
{
	personalData pD[3];
	char n1[50], n2[50], n3[50];
	char ad1[50], ad2[50], ad3[50];
	int a1, a2, a3;
	int ph1, ph2, ph3;
	
	cout << "Enter your name";
	cin.getline(n1,50);
	pD[0].setName(n1);
	cout << "\n enter your address";
	cin.getline(ad1, 50);
	pD[0].setAddress(ad1);
	cout << "\n enter your age";
	cin >> a1;
	pD[0].setAge(a1);
	cout << "\n enter yout phone number";
	cin >> ph1;
	pD[0].setPhoneNo(ph1);
	cin.ignore();

	cout << "Enter friend-1 name";
	cin.getline(n2, 50);
	pD[1].setName(n2);
	cout << "\n enter friend-1 address";
	cin.getline(ad2, 50);
	pD[1].setAddress(ad2);
	cout << "\n enter frien-1 age";
	cin >> a2;
	pD[1].setAge(a2);
	cout << "\n enter friend-1 phone number";
	cin >> ph2;
	pD[1].setPhoneNo(ph2);
	cin.ignore();
	cout << "Enter friend-2 name";
	cin.getline(n3, 50);
	pD[2].setName(n3);
	cout << "\n enter friend-2 address";
	cin.getline(ad3, 50);
	cin.ignore();
	pD[2].setAddress(ad3);
	cout << "\n enter frien-2 age";
	cin >> a3;
	pD[2].setAge(a3);
	cout << "\n enter friend-2 phone number";
	cin >> ph3;
	pD[2].setPhoneNo(ph3);
	//name1 = pD[0].getName();
	//name2 = pD[1].getName();
	//name3 = pD[2].getName();
	//address1 = pD[0].getAddress();
	//address2 = pD[1].getAddress();
	//address3 = pD[2].getAddress();

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nrecord no-:" << i + 1<<"  ";
		cout<<"\nname of:"<<i+1<<"  "<< pD[i].getName();
		cout << "\naddress of:" << i + 1 <<"  "<< pD[i].getAddress();
		cout << "\nage of:" << i + 1 << "  "<< pD[i].getAge();
		cout << "\n phone of:" << i + 1 <<"  " << pD[i].getPhoneNo();
	}
}