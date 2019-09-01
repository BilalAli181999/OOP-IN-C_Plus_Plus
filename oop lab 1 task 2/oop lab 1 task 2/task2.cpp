#include<iostream>
#include"task2.h"
using namespace std;
void takeSpending(expenses &exp)
{
	cout << "Give monthly Spending of: " << exp.name;
	cin >> exp.spending;
}
void giveMonthlyReport(monthlyBudget & bud)
{
	for (int i = 0; i < 10; i++)
	{
		int sum;
		cout << bud.exp[i].name << "\n";
		if (bud.exp[i].spending < bud.exp[i].budget)
		{
			cout << "Amount under :";
			sum = bud.exp[i].budget - bud.exp[i].spending;
			cout << sum << " RS\n";
		}
		if (bud.exp[i].spending > bud.exp[i].budget)
		{
			cout << "Amount over :";
			sum = bud.exp[i].spending - bud.exp[i].budget;
			cout << sum<<" RS\n";
		}

	}
	int totalSpending= 0;
	int totalBudget = 0;
	int totalSum;
	for (int i = 0; i < 10; i++)
	{
		totalSpending = totalSpending + bud.exp[i].spending;
	}
	for (int i = 0; i < 10; i++)
	{
		totalBudget = totalBudget + bud.exp[i].budget;
	}
	if (totalBudget< totalSpending)
	{
		cout << "TOTAL MONTHLY AMOUNT OVER:";
		totalSum = totalSpending - totalBudget;
		cout << totalSum << " RS\n";
	}
	if (totalBudget>totalSpending)
	{
		cout << " TOTAL MONTHLY AMOUNT UNDER:";
		totalSum = totalBudget - totalSpending;
		cout << totalSum<< " RS\n";
	}
}