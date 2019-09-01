#ifndef TASK_H
#define TASK_H
#include"date.h"
#include"time.h"

class task
{
public:
	int id;
	date date1;
	time t;
	
public:
	task();
	task(int id, int s, int m, int h, int d,int mon,int y);
	~task();
	void display();
};
#endif