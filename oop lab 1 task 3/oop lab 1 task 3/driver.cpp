#include<iostream>
#include"task3.h"
using namespace std;
int main()
{
	machine drink[5];
	strcpy_s(drink[0].drinkName, "cola");
	drink[0].unitCost = 0.75;
	drink[0].noOfDrinks = 20;
	strcpy_s(drink[1].drinkName, "root beer");
	drink[1].unitCost = 0.75;
	drink[1].noOfDrinks = 20;
	strcpy_s(drink[2].drinkName, "lemonlime");
	drink[2].unitCost = 0.75;
	drink[2].noOfDrinks = 20;
	strcpy_s(drink[3].drinkName, "grapesoda");
	drink[3].unitCost = 0.80;
	drink[3].noOfDrinks = 20;
	strcpy_s(drink[4].drinkName, "creamsoda");
	drink[4].unitCost = 0.80;
	drink[4].noOfDrinks = 20;
	char ch;
 double dollars,change,cost;
	int no;
	do
	{
		for (int i = 0; i < 5; i++)
		{
			cout <<i+1<<":" << drink[i].drinkName << "....." << drink[i].unitCost << "RS ..... Remaining" << drink[i].noOfDrinks << "\n";
		}
		cout << "Enter the number of drink you want";
		cin >> no;
		if (no == 1)

		{
			cout << "\n  PLEASE INSERT RS:" << drink[0].unitCost;
			cost = drink[0].unitCost;
			drink[0].noOfDrinks--;
		}
		if (no == 2)
		{
			cout << "\n  PLEASE INSERT RS:" << drink[1].unitCost;
			cost = drink[1].unitCost;
			drink[1].noOfDrinks--;
		}
		if (no == 3)
		{
			cout << "\n  PLEASE INSERT RS:" << drink[2].unitCost;
			cost = drink[2].unitCost;
			drink[2].noOfDrinks--;
		}
		if (no == 4)
		{
			cout << "\n  PLEASE INSERT RS:" << drink[3].unitCost;
			cost = drink[3].unitCost;
			drink[3].noOfDrinks--;
		}
		if (no == 5)
		{
			cout << "\n  PLEASE INSERT RS:" << drink[4].unitCost;
			cost = drink[4].unitCost;
			drink[4].noOfDrinks--;
		}
		
		do
		{
			cout << "\nEnter the amount of currency you are entering in machine: ";
			cin >> dollars;
		} while (dollars > 1.0);
		cout << "\nget the change rs/:" <<  dollars-cost;
		cout << "\nDo you want to enter again Y/N";
		cin >> ch;
	}
	while (ch == 'y' || ch == 'Y');
}
