#include<iostream>
#include"Vender.h"
using namespace std;
void inputItem(item & prod)
{
	cout << "Enter the name of Item to be added:";
	cin >> prod.name;
	cout << "Enter no of items:";
	cin >> prod.noOfItems;
	cout << "Enter unit price of product:";
	cin >> prod.unitPrice;
}
void printItem(item prod)
{

	cout<< prod.name;
	cout << " .....";
	/*cout<< prod.noOfItems;
	cout << " \nUnit price of product:.....";*/
	cout<< prod.unitPrice<<" Rs";
}
void addNewItemInVendingMachine(vendingMachine & vending , item )
{

	inputItem(vending.data[vending.noOfItems]);
	vending.noOfItems++;
}
void removeItemFromVendingMachine(vendingMachine & vending, char * itemName)
{
	bool status = true;
	for (int i = 0; i <= vending.noOfItems && status; i++)
	{
		if (vending.data[i].name == itemName)
		{
			strcpy_s(vending.data[i].name , vending.data[i + 1].name);
			vending.data[i].noOfItems = vending.data[i+1].noOfItems;
			vending.data[i].unitPrice = vending.data[i + 1].unitPrice;
			vending.noOfItems--;
			status = false;
		}
		if (status)
		{
			cout << "***ITEM NOT FOUND***";
		}
	}	
}
void updateItemUnitPrice(vendingMachine & vending, char* itemName, int newUnitPrice)
{
	bool status = true;
	for (int i = 0; i <= vending.noOfItems && status; i++)
	{
		if (vending.data[i].name == itemName)
		{
			vending.data[i].unitPrice = newUnitPrice;
			status = false;
		}
	}
	if (status)
	{
		cout << "Item not found";
	}
}
void addCurrencyInVendingMachine(vendingMachine & vending, int rupees)
{
	vending.rupees = vending.rupees + rupees;
	cout << "****Amount entered successfully****";
}
void orderItem(vendingMachine & vending, int no )
{
	int amount;
	int balance;
	
		
	if (no != 101)
	{
		cout << "Enter rupees\n";
		cin >> amount;

		if (no == 1)

		{
			balance = amount - vending.data[0].unitPrice;
			cout << "you have to pay" << vending.data[0].unitPrice;
			vending.data[0].noOfItems--;
		}
		if (no == 2)
		{
			balance = amount - vending.data[1].unitPrice;
			cout << "you have to pay" << vending.data[1].unitPrice;
			vending.data[1].noOfItems--;
		}
		if (no == 3)
		{
			balance = amount - vending.data[2].unitPrice;
			cout << "you have to pay" << vending.data[2].unitPrice;
			vending.data[2].noOfItems--;
		}
		if (no == 4)
		{
			balance = amount - vending.data[3].unitPrice;
			cout << "you have to pay" << vending.data[3].unitPrice;
			vending.data[3].noOfItems--;
		}
		if (no == 5)
		{
			balance = amount - vending.data[4].unitPrice;
			cout << "you have to pay" << vending.data[4].unitPrice;
			vending.data[4].noOfItems--;
		}
		if (no == 6)
		{
			balance = amount - vending.data[5].unitPrice;
			cout << "you have to pay" << vending.data[5].unitPrice;
			vending.data[5].noOfItems--;
		}
		if (no == 7)
		{
			balance = amount - vending.data[6].unitPrice;
			cout << "you have to pay" << vending.data[6].unitPrice;
			vending.data[6].noOfItems--;
		}
		if (balance < vending.rupees)
		{
			cout << "Get the remaining Balance" << balance;
			vending.rupees = vending.rupees - balance;
		}
		else
		{
			cout << "***NO CHANGE FOUND***";
		}
		
	}
	if (no == 101)
	{
		int n;
		cout << "Press 1 - add item in machine\npress 2 - remove item from machine\n press 3 - update item unit price\n press 4 - add currency in machine";
		cin >> n;
		if (n == 1)
			addNewItemInVendingMachine(vending, vending.data[n]);
		if (n == 2)
		{
			char ch1[100];
			cout << "enter name of item to remove";
			cin >> ch1;
			removeItemFromVendingMachine(vending, ch1);
		}
		if (n == 3)
		{
			char ch1[100];
			int newPrice;
			cout << "enter name and new price of item to update: ";
			cin >> ch1;
			cin >> newPrice;
			updateItemUnitPrice(vending, ch1, newPrice);
		}
		if (n == 4)
		{
			int curr;
			cout << "Enter amount of currency to enter";
			cin >> curr;
			addCurrencyInVendingMachine(vending, curr);
		}
	}

}