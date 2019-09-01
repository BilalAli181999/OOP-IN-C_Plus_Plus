#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include"bankaccount.h"
class SavingAccount:public BankAccount
{
private:
	int interestRate;
public:
	void setIntersetRate(int i)
	{
		interestRate = i;
	}
	void calculateInterst()
	{
		double interest;
		
		interest = (BankAccount::getBalance())*(SavingAccount::interestRate/100.0 );
		cout << "\n Interst on your Balance: ";
		cout << interest;
	}
	

};


#endif