#ifndef TIME_H
#define TIME_H
class time
{
private:
	int sec;
	int min;
	int hour;
public:
	time();
	void setSec(int);
	time(int s, int m, int h);
	void displayTime();
	~time();
};
#endif 
