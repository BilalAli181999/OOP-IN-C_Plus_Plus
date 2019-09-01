#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<string>
#include<iostream>
using namespace std;

class BankAccount
{
	string title;
	long int accNumber;
	double balance;
public:
	BankAccount()
	{
		balance = 0;
		title = " Bilal's Account";
		accNumber = 8210;
	}
	void deposit()
	{
		double d;
		cout << "\n ENTER Amount you want to deposit";
		cin >> d;
		balance = balance+d;
	}
	void withdraw()
	{
		double w;
		cout << "\n ENTER Amount you want to withdraw";
		cin >> w;
		if (w < balance)
		{
			balance = balance - w;
		}
		else
		{
			cout << "\n Not Enough Balance";
		}
	}
	double getBalance()
	{
		return balance;
	}
	long int getAccountNumber()
	{
		return accNumber;
	}
	void setBalance(int b)
	{
		balance = b;
	}
	void display()
	{
		cout << "\n TITLE: " << title;
		cout << "\n ACCOUNT NUMBER:  " << accNumber;
		cout << "\n CURRENT BALANCE:" << balance;
	}
};

#endif
