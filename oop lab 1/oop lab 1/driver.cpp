#include<iostream>
#include"task1.h"
using namespace std;
int main()
{
	 const int resultSize=2;
	 result *res=new result [resultSize];
	cout << "Enter number of courses for result 1";
	cin>>res[0].num_of_courses ;
	cout << "Enter number of courses for result 2";
	cin>>res[1].num_of_courses;
	res[0].courseList = new course[res[0].num_of_courses];
	res[1].courseList = new course[res[1].num_of_courses];
	for (int i = 0; i < res[0].num_of_courses; i++)
	{
		cout << "Enter course name of course:" << i + 1 << " of res1:";
		cin >> res[0].courseList[i].course_name;
		cout << "Enter Obtained Marks of course:" << i + 1 << " of res1:";
		cin >> res[0].courseList[i].obtained_marks;
		cout << "Enter Total Marks of course:" << i + 1 << " of res1:";
		cin >> res[0].courseList[i].total_marks;

	}
	for (int i = 0; i < res[1].num_of_courses; i++)
	{
		cout << "Enter course name of course:" << i + 1 << " of res2:";
		cin >> res[1].courseList[i].course_name;
		cout << "Enter Obtained Marks of course:" << i + 1 << " of res2:";
		cin >> res[1].courseList[i].obtained_marks;
		cout << "Enter Total Marks of course:" << i + 1 << " of res2:";
		cin >> res[1].courseList[i].total_marks;

	}
	computeAllResult(res, resultSize);

	for (int i = 0; i < resultSize; i++)
	{
		cout << "***PERCENTAGE OF RESULT***" << i + 1 <<"  "<< res[i].percentage << "\n";
	}

}