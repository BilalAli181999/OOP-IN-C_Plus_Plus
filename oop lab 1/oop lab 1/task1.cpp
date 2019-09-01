#include<iostream>
#include"task1.h"
using namespace std;
void computeOneResult(result &ptrResult)
{
	double sumOfMarks=0;
	double totalOfMarks = 0;
	for (int i = 0; i < ptrResult.num_of_courses; i++)
	{
		sumOfMarks = sumOfMarks + ptrResult.courseList[i].obtained_marks;
		totalOfMarks= totalOfMarks+ ptrResult.courseList[i].total_marks;
	}
	ptrResult.percentage = (sumOfMarks / totalOfMarks) * 100.0;
	
}
void computeAllResult(result *allResult , int size)
{
	
	for (int i = 0; i < size; i++)
	{
		computeOneResult(allResult[i]);
	}
}