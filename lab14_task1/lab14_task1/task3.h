
#ifndef TASK3_H
#define TASK3_H
#include<iostream>
using namespace std;
class TestScore
{
	double testScore=0;

public:
	TestScore(double *test)
	{
		for (int i = 0; i < 10; i++)
		{
			if (test[i] > 100 || test[i] < 0)
			{
				char s[20] = "Wrong Marks";
				throw s;
			}
			else
			{
				
				testScore = testScore + test[i];
			}
		}
	}
	double getTestScore()
	{
		return testScore;
	}
};



#endif
