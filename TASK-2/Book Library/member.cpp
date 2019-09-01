//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "member.h"

Member::Member()//if we dont input by ourself ,constructor is made to auto generate default objects
{
	mI++;
	strcpy_s(MemberName ,"Bilal Ali");
	category = "Bronze";
	memberId = mI;
	bookAllowed = 1;
	returnDate.day = issuance.day + 14;
	if (returnDate.day > 30)
	{
		returnDate.day = returnDate.day - 30;
		returnDate.month++;
	}
	if (returnDate.month > 12)
	{
		returnDate.month = returnDate.month - 12;
		returnDate.year++;
	}
}

Member::Member(char* mN,int d,int m,int y,string c):issuance(d,m,y)
{
	mI++;
	strcpy_s(MemberName, mN);
	memberId = mI;
	category = c;
	if (category == "Gold" || category == "gold")
	{
		bookAllowed = 5;
	}
	else if (category == "Silver" || category == "silver")
	{
		bookAllowed = 3;
	}
	else if (category == "Bronze" || category == "bronze")
	{
		bookAllowed = 1;
	}

	if (returnDate.day > 30)
	{
		returnDate.day = returnDate.day - 30;
		returnDate.month = issuance.month;
		returnDate.month++;
		
	}
	if (returnDate.month > 12)
	{
		returnDate.month = returnDate.month - 12;
		returnDate.year = issuance.year;
		returnDate.year++;
	}
}

void Member::display()
{
	cout << "\n MemberName:  " << MemberName;
	cout << "\n MemberId:  " << memberId;
	cout << "\n Category:  " << category;
	cout << "\n Books Allowed:  " << bookAllowed;
	cout << "\n Issuance Date:  ";
	issuance.display();
	cout << "\n Return Date:  ";
	returnDate.display();
}

char & Member::operator[](int index)
{
	return MemberName[index];
}

void Member::setCategory(string c)
{
	category = c;
	if (category == "Gold" || category == "gold")
	{
		bookAllowed = 5;
	}
	else if (category == "Silver" || category == "silver")
	{
		bookAllowed = 3;
	}
	else if (category == "Bronze" || category == "bronze")
	{
		bookAllowed = 1;
	}
}

void Member::setIssuanceDate(int d,int m,int y)
{
	issuance.day = d;
	issuance.month = m;
	issuance.year = y;
	returnDate.day = issuance.day + 14;
	returnDate.month = issuance.month;
	returnDate.year = issuance.year;
	if (returnDate.day > 30)
	{
		returnDate.day = returnDate.day - 30;
		
		returnDate.month++;
		
	}
	if (returnDate.month > 12)
	{
		returnDate.month = returnDate.month - 12;
		
		returnDate.year++;
	}

}

void Member::setReturnDate(int d, int m, int y)
{
	returnDate.day = d;
	returnDate.month = m;
	returnDate.year = y;

}

void Member::setMemberId(int id)
{
	memberId = id;
}

void Member::setMemberName(char n[])
{
	strcpy_s(MemberName, n);
}

void Member::setBookAllowed(int bA)
{
	bookAllowed = bA;
}

string Member::getCategory()
{
	return category;
}

int Member::getBookAllow()
{
	return bookAllowed;
}

int Member::getReturnDay()
{
	return returnDate.day;
}

int Member::getReturnMonth()
{
	return returnDate.month;
}

int Member::getReturnYear()
{
	return returnDate.year;
}

int Member::getIssuanceDay()
{
	return issuance.day;
}

int Member::getIssuanceMonth()
{
	return issuance.month;
}

int Member::getIssuanceYear()
{
	return issuance.year;
}

int Member::getMemberId()
{
	return memberId;
}

char * Member::getMemberName()
{
	return MemberName;
}
