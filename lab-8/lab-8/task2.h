#ifndef TASK2_H
#define TASK2_H
#include"task1.h"
class Timeoff
{
private:
	char name[30];
	int id;
	/*int sickLeave;
	int unPaidTimeOff;
	int vacation;*/
	Numdays maxSickDays;
	Numdays sickTaken;
	Numdays maxVacation;
	Numdays vacationTaken;
	Numdays maxUnpaid;
	Numdays unpaidTaken;
	
public:
	Timeoff();
	Timeoff(char*n, int i, /*int s, int uto, int v,*/ double msd, double st, double mV, double vT, double mU, double uT);
	void setName(char*);
	void setId(int i);
	char* getName();
	int getId();
	void setMaxSickDays(int s);
	void setSickTaken(int h);
	void setMaxVacation(int v);
	void setVacationTaken(int s);
	void setMaxUnpaid(int h);
	void setUnpaidTaken(int v);
	double getMaxSickDays();
	double getsickTaken();
	double getMaxVacation();
	double getVacationTaken();
	double getMaxUnpaid();
	double getUnpaidTaken();
	void display();
	void noOfMonths(int m);

};


#endif