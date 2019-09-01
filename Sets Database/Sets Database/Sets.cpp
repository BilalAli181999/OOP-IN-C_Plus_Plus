#include<iostream>
#include"sets.h"
using namespace std;
void createSetDatabase(setDatabase & setDb, int size)
{
	setDb.noOfSets = 0;
	setDb.capacity = size;
	setDb.set = new set[setDb.capacity];
}
void setsDatabase()
{
	setDatabase setDb;
	createSetDatabase(setDb, 10);
	int choice; char name[10];
	int size;
	char ch;
	do
	{
		cout << "\n         *****SET COLLECTIONS*****\n";
		cout << "================================================================================\n";
		cout << "Enter 1. to add a set\n Enter 2. to remove a set\n Enter 3. display all sets\n Enter 4. to display a set\n Enter 5.to add an element in set\n Enter 6.to remove an element from set \n  Enter 7. to calculate intersection \n";
		if (choice == 1)
		{
			addSet(setDb, 2);
		}
		if (choice == 2)
		{
			removeSet(setDb, "set1");
		}
		if (choice == 3)
		{
			displayAllSets(setDb);
		}
		if (choice == 4)
		{
			displaySet(setDb, "set1");
		}
		if (choice == 5)
		{
			set setx;
			setx=calIntersection(setDb, setDb.set[0], setDb.set[1]);
			for (int i = 0; i < setx.capacity; i++)
			{
				cout << setx.data[i];
			}
		}
		cout << "do you want to enter again y/n ";
		cin >> ch;
	} 
	while (ch == 'y' || ch == 'Y');
}
set calIntersection (setDatabase & setDb,set set1,set set2)
{
	set setx;
	setx.data = new int[set1.noOfElements];
	setx.capacity = 0;
	for (int i = 0; i < set1.noOfElements; i++)
	{
		for (int j = 0; j < set2.noOfElements; j++)
		{
			if (set1.data[i] == set2.data[j])
			{
				setx.data[setx.capacity] = set1.data[i];
				setx.capacity++;
			}
			
		}
	}
}
void addSet(setDatabase & setDb, int size)
{
	cout << "Enter the name of set";
	cin >> setDb.set[setDb.noOfSets].name;
	setDb.set[setDb.noOfSets].data = new int[size];
	setDb.set[setDb.noOfSets].noOfElements = size;
	setDb.noOfSets++;
	setDb.set[setDb.noOfSets].capacity = 0;
}
void removeSet(setDatabase & setDb, char *name)
{
	for (int i = 0; i < setDb.noOfSets++; i++)
	{
		if (setDb.set[i].name == name)
		{
			delete[]setDb.set[i].data;
			setDb.noOfSets--;
		}
		else
			cout << "Set with name" << name << " not found";
	}
}
void displayAllSets(setDatabase &setDb)
{
	for (int i = 0; i < setDb.noOfSets++; i++)
	{
		cout << "{ ";
		for (int j = 0; j < setDb.set[i].noOfElements; j++)
		{

			cout << setDb.set[setDb.noOfSets].data[j] << " ";

		}
		cout << " }";
	}
}
void displaySet(setDatabase & setDb, char *name)
{
		
	for (int i = 0; i < setDb.noOfSets++; i++)
	{
		if (setDb.set[i].name == name)
		{
			cout << "{ ";
			for (int j = 0; j < setDb.set[i].noOfElements; j++)
			{

				cout << setDb.set[setDb.noOfSets].data[j] << " ";

			}
			cout << " }";
		}
		else
			cout << "Set with name" << name << " not found";
	}
	
}
