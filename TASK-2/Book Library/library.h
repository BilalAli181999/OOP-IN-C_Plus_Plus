//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#ifndef LIBRARY_H
#define LIBRARY_H
#include"date.h"
#include"member.h"
#include"book.h"

class Library
{

	Date currentDate;
	Member memberList[20];
	Book bookList[100];
	int noOfBooks;
	int noOfMembers;

public:
	Library();
	void displayBookList();
	void displayMemberList();
	void addBooks();
	void addMembers();
	void setCurrentDate(int d,int m,int y);
	int getNoOfmembers();
	int getNoOfBooks();
	void getReurningMembers();
	void deleteMember(int id);
	void deleteBook(int id);
	void findByName(char *name);
	void findByPublisherName(char *name);
	void findByAuthorName(char *name);
	void alphabeticalOrderBook();
	void exchangeBook(int i,int j);
	void alphabeticalOrderMember();
	void exchangeMember(int i, int j);
	void saveLibrary();
	void retreiveLibrary();
	friend class Book;
	void saveMembers();
	void retreiveMembers();
};

#endif // !LIBRARY_H

