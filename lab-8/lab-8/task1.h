#ifndef TASK1_H
#define TASK1_H
class Numdays
{
private:
	double hours;
	double days;
public:
	Numdays();
	Numdays(double h);
	void setHours(double h);
	double getHours();
	double getDays();
	void display();
	double operator+(Numdays &ref);
	double operator-(Numdays &ref);
	Numdays operator++();
	Numdays operator++(int);
	Numdays operator--();
	Numdays operator--(int);
};




#endif
