#ifndef DATE_H
#define DATE_H
class date
{
public:
	int day;
	int month;
	int year;
public:
	date();
	date(int d, int m, int y);
	void displayDate();
	~date();
};
#endif 