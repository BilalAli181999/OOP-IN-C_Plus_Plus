
#include<string>
#include<iostream>
#include "bankaccount.h"
#include "savingaccount.h"
#include "checkingaccount.h"
using namespace std;


int main()
{/*
	BankAccount b;
	b.display();
	b.deposit();
	b.display();
	b.withdraw();
	b.display();
*/

	/*SavingAccount s;
	s.BankAccount::deposit();
	s.setIntersetRate(5);
	s.calculateInterst();
	s.display();*/


	checkingAccount c;
	c.deposit();
	c.setFeePerTrans(100);
	c.withdraw();
	c.display();
	
}
