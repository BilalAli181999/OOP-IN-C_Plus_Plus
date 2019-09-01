//NAME:BILAL ALI
//ROLL NO:BCSF16A030

#ifndef MEMBER_H
#define MEMBER_H
#include<iostream>
#include<string>
#include"date.h"
using namespace std;
class Member
{
	char MemberName[100];
	int memberId;
	string category;
	int bookAllowed;
	static int mI;
	Date issuance;
	Date returnDate;
public:
	Member();
	Member(char* mN,int d,int m,int y,string c);
	void display();
	char& operator[](int index);
	void setCategory(string c);
	void setIssuanceDate(int d,int m,int y);
	void setReturnDate(int d, int m, int y);
	void setMemberId(int id);
	void setMemberName(char n[]);
	void setBookAllowed(int bA);
	string getCategory();
	int getBookAllow();
	int getReturnDay();
	int getReturnMonth();
	int getReturnYear();
	int getIssuanceDay();
	int getIssuanceMonth();
	int getIssuanceYear();
	int getMemberId();
	char * getMemberName();
};

#endif

