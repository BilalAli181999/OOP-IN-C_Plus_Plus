#include<iostream>
#include"Vender.h"
using namespace std;
int main()
{
	int no, balance, amount;
	vendingMachine vending;
	char ch;
	vending.noOfItems = 0;
	do
	{
		/*cout << "\t VENDING MACHINE\n";
		cout << "1 Cadbury..........30Rs\n2 Coffee..........40Rs\n3 Chocolate..........10Rs\n4 Latte..........15Rs\n5 Water Nestle..........45Rs\n6 Cappucino..........50Rs\n7 Pepsi50ml..........40rs\n\nEnter Item Number To Buy";
*/
	if (vending.noOfItems > 0)
	{
		for (int i = 0; i < vending.noOfItems; i++)
		{
			printItem(vending.data[i]);
			cout<<"\n\n";
		}
	}
	cout << "Enter Item Number To Buy";
		cin >> no;
		orderItem(vending,no);
		
		
		cout << "Do you want to enter again Y/N";
		cin >> ch;
	}
	while (ch == 'y'|| ch == 'Y');
}
