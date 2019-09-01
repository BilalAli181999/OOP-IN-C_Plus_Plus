#ifndef TEAMLEADER_H
#define TEAMLEADER
#include"productionWorker.h"
class TeamLeader:public ProductionWorker
{
private:
	double monthlyBonus;
	int reqTrainingHours;
	int noOfTrHours;
public:
	TeamLeader(double mB, int rth, int noth, int s, double pR, string n, int no):ProductionWorker(s,pR,n,no)
	{
		monthlyBonus = mB;
		reqTrainingHours = rth;
		noOfTrHours = noth;
	}
	void setMonthlyBonus(int mB)
	{
		monthlyBonus = mB;
	}
	void setReqTrainingHours(int tH)
	{
		reqTrainingHours = tH;
	}
	void setNoOfTrHours(int noH)
	{
		noOfTrHours =noH;
	}
	void setShift(int s)
	{
		setShift(s);
	}

	void setHourlyPayRate(double pR)
	{
		setHourlyPayRate(pR);
	}

	void setEmployeeName(string n)
	{
		Employee::setName(n);
	}

	void setNumber(int n)
	{
		Employee::setNumber(n);
	}

	int getShift()
	{
		return ProductionWorker::getShift();
	}

	double getHPR()
	{
		return ProductionWorker::getHPR();
	}

	int getNumber()
	{
		return Employee::getNumber();
	}

	string getName()
	{
		return Employee::getName();
	}
	void display()
	{
		ProductionWorker::display();
		cout << "\n Monthly bonus amount:";
		cout << monthlyBonus;
		cout << "\n Required training hours:";
		cout << reqTrainingHours;
		cout << "\n Training hours attended:";
		cout <<noOfTrHours;

	}
};

#endif