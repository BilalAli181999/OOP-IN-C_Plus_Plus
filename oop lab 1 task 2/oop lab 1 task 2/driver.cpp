#include<iostream>
#include"task2.h"
using namespace std;
int main()
{
	monthlyBudget bud;
	strcpy_s(bud.exp[0].name, "housing");
	bud.exp[0].budget = 500.0;
	strcpy_s(bud.exp[1].name, "utilities");
	bud.exp[1].budget = 150.0;
	strcpy_s(bud.exp[2].name, "household expenses");
	bud.exp[2].budget = 65.0;
	strcpy_s(bud.exp[3].name, "transportation");
	bud.exp[3].budget = 50.0;
	strcpy_s(bud.exp[4].name, "food");
	bud.exp[4].budget = 250.0;
	strcpy_s(bud.exp[5].name, "medical");
	bud.exp[5].budget = 30.0;
	strcpy_s(bud.exp[6].name, "insurance");
	bud.exp[6].budget = 100.0;
	strcpy_s(bud.exp[7].name, "entertainment");
	bud.exp[7].budget = 150.0;
	strcpy_s(bud.exp[8].name, "clothing");
	bud.exp[8].budget = 75.0;
	strcpy_s(bud.exp[9].name, "missalleneous");
	bud.exp[9].budget = 50.0;
	for (int i = 0; i < 10; i++)
	{
		takeSpending(bud.exp[i]);
	}
	giveMonthlyReport(bud);
	return 0;
}