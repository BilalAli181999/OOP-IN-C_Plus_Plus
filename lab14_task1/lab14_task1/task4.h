#ifndef TASK4_H
#define TASK4_H
class Account
{
	double balance;
public:
	Account()
	{
		balance = 0;
	}
	Account(double initialDeposit)
	{
		balance = initialDeposit;
	}
	double getBalance()
	{
		return balance;
	}
	double deposit(double amount)
	{
		if (amount > 0)
			balance += amount;
		else
			throw "Negative Value Entered";
		return balance;
	}
	double withdraw(double amount)
	{
		if ((amount > balance) || (amount < 0))
			throw "Not enough Balance";
		else
			balance -= amount;
		return balance;
	}

};

#endif
