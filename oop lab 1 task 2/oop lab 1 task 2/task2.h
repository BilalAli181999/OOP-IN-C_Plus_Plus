
struct expenses
{
	char name[50];
	double budget;
	double spending;
};
struct monthlyBudget
{
	expenses exp[10];
	
};
void takeSpending(expenses &);
void giveMonthlyReport(monthlyBudget & );