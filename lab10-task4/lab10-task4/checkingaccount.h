#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include"bankaccount.h"
class checkingAccount:public BankAccount
{
	double feePerTransaction;
public:
	checkingAccount()
	{
		feePerTransaction = 0;
	}
	void withdraw()
	{
		
		BankAccount::withdraw();
		if(feePerTransaction<=getBalance())
		setBalance(getBalance()- feePerTransaction);
		else
			cout << "\n Insufficient amount in account,the remaining interest is debt on you";
	}
	void deposit()
	{
		BankAccount::deposit();
		setBalance(getBalance() - feePerTransaction);
	}
	void setFeePerTrans(int f)
	{
		
			feePerTransaction = f;
		
	}
	double getFee()
	{
		return feePerTransaction;
	}
	
};



#endif