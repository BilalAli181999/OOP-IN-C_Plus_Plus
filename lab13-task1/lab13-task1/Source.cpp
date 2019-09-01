#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int i;
	fstream f("numbers.dat", ios::out|ios::binary);
	
	cout << "Enter an integer: ";
		cin >> i;

	while (i != 0)
	{

		f.write((char*)&i, sizeof(i));

		cout << "Enter an integer: ";
		cin >> i;
	}
	f.close();





	f.open("numbers.dat",ios::in|ios::binary);
	int pos;
	int noOfVal = 0;
	f.seekp(0, ios::end);
	noOfVal = f.tellp()/4;
//	cout << "no:" << noOfVal;
	int number;
	char choice;
	do {
		cout << "Enter the positon: ";
		cin >> pos;
		if (pos <= noOfVal && pos > 0)
		{
			f.seekg((pos * 4) - 4, ios::beg);

			f.read((char*)&number, 4);

			cout << "REQUIRED NUMBER: " << number;
		}
		else
		{
			cout << "Inappropriate Index";
		}
		
		cout << "\n Do you want to continue(Y/N)";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	f.close();



	
	f.open("numbers.dat", ios::out | ios::ate | ios::in);
	int editPos,newNum;
	do {
		cout << "\nEnter the positon: ";
		cin >> editPos;
		cout << "\n Enter new number:";
		cin >> newNum;
		if (editPos <= noOfVal && editPos > 0)
		{
			f.seekp((editPos * 4) - 4, ios::beg);

			f.write((char*)&newNum, 4);
			cout << "\n Edit Done";

		}
		else
		{
			cout << "Inappropriate Index";
		}

		cout << "\n Do you want to continue(Y/N)";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

}

