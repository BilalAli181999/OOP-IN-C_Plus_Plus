//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "library.h"
#include<fstream>
Library::Library()
{
	noOfBooks = 0;
	noOfMembers = 0;

}

void Library::displayBookList()
{
	for (int i = 0; i < noOfBooks; i++)
	{
		bookList[i].display();
		cout << "\n";
	}
}

void Library::displayMemberList()
{
	for (int i = 0; i < noOfMembers; i++)
	{
		memberList[i].display();
		cout << "\n";
	}
}

void Library::addBooks()
{
	
	char bN[50];
	cout << "\nEnter Book Name: ";
	cin.getline( bN,50);
	bookList[noOfBooks].setBookTitle(bN);
	
	char  pN[50];
	cout << "\nEnter Publisher Name: ";
	cin.getline(pN,50);
	bookList[noOfBooks].setPublisherName(pN);
	
	char  aN[50];
	cout << "\nEnter Author Name: ";
	cin.getline( aN,50);
	
	bookList[noOfBooks].setAuthorName(aN);
	
	noOfBooks++;
	
	
}

void Library::addMembers()
{
	char mN[50];
	cout << "\nEnter Member Name: ";
	cin.getline(mN,50);
	memberList[noOfMembers].setMemberName(mN);
	string category;
	cout << "\nEnter Member Category: ";
	cin >> category;
	memberList[noOfMembers].setCategory(category);
	int d, m, y;
	cin.ignore();
	cout << "\n Enter issuance day:";
	cin >> d;
	cout << "\n Enter issuance month:";
	cin >> m;
	cout << "\n Enter issuance year:";
	cin >> y;
	memberList[noOfMembers].setIssuanceDate(d,m,y);
	noOfMembers++;

}

void Library::setCurrentDate(int d, int m, int y)
{
	currentDate.day = d;
	currentDate.month = m;
	currentDate.year = y;

}

int Library::getNoOfmembers()
{
	return noOfMembers;
}

int Library::getNoOfBooks()
{
	return noOfBooks;
}

void Library::getReurningMembers()
{
	for (int i = 0; i < noOfMembers; i++)
	{
		if (currentDate.day == memberList[i].getReturnDay() && currentDate.month == memberList[i].getReturnMonth() && currentDate.year == memberList[i].getReturnYear())
		{
			memberList[i].display();
			cout << "\n";
		}
	}
}

void Library::deleteMember(int id)
{
	for (int i = 0; i < noOfMembers; i++)
	{
		if (memberList[i].getMemberId() == id)
		{
			for (int j = i; j < noOfMembers; j++)
			{
				memberList[j].setCategory(memberList[j+1].getCategory());
				memberList[j].setIssuanceDate(memberList[j + 1].getIssuanceDay(), memberList[j + 1].getIssuanceMonth(), memberList[j + 1].getIssuanceYear());
				memberList[j].setReturnDate(memberList[j + 1].getReturnDay(), memberList[j + 1].getReturnMonth(), memberList[j + 1].getReturnYear());
				memberList[j].setMemberId(memberList[j + 1].getMemberId());
			}
			noOfMembers--;
		}
	}
}

void Library::deleteBook(int id)
{
	for (int i = 0; i < noOfBooks; i++)
	{
		if (bookList[i].getBookId() == id)
		{
			for (int j = i; j < noOfBooks; j++)
			{
				bookList[j].setBookId(bookList[j + 1].getBookId());
				bookList[j].setAuthorName(bookList[j + 1].getAuthorName());
				bookList[j].setBookTitle(bookList[j + 1].getBookTitle());
				bookList[j].setPublisherName(bookList[j + 1].getPublisherName());

			}
			noOfBooks--;
		}
	}
}

void Library::findByName(char * name)
{
	bool status=0;
	for (int i = 0; i < noOfBooks; i++)
	{
		if ((strcmp (bookList[i].getBookTitle(), name)==0))
		{
			bookList[i].display();
			status = 1;
		}

	}
	if (status == 0)
	{
		cout << "\n Book of this name not Found";
	}
}

void Library::findByPublisherName(char * name)
{
	bool status = 0;
	for (int i = 0; i < noOfBooks; i++)
	{
		if ((strcmp(bookList[i].getPublisherName(), name) == 0))
		{
			bookList[i].display();
			status = 1;
		}

	}
	if (status == 0)
	{
		cout << "\n Book of this publisher  not Found";
	}
}

void Library::findByAuthorName(char * name)
{
	bool status = 0;
	for (int i = 0; i < noOfBooks; i++)
	{
		if ((strcmp(bookList[i].getAuthorName(), name) == 0))
		{
			bookList[i].display();
			status = 1;
		}

	}
	if (status == 0)
	{
		cout << "\n Book of this Author not Found";
	}
}

void Library::alphabeticalOrderBook()
{
	for (int i = 0; i < getNoOfBooks(); i++)
	{
		for (int j = i + 1; j < getNoOfBooks(); j++)
		{
			if ((int)bookList[i][0] > (int)bookList[j][0])
			{
				exchangeBook(i, j);
			}
		}
	}
}

void Library::exchangeBook(int i,int j)
{
	int tId;
	char tB[100],tA[100],tP[100];
	strcpy_s(tB, bookList[i].getBookTitle());
	bookList[i].setBookTitle(bookList[j].getBookTitle());
	bookList[j].setBookTitle(tB);

	strcpy_s(tA, bookList[i].getAuthorName());
	bookList[i].setAuthorName(bookList[j].getAuthorName());
	bookList[j].setAuthorName(tA);
	
	strcpy_s(tP, bookList[i].getPublisherName());
	bookList[i].setPublisherName(bookList[j].getPublisherName());
	bookList[j].setPublisherName(tP);

	tId = bookList[i].getBookCode();
	bookList[i].setCode(bookList[j].getBookCode());
	bookList[j].setCode(tId);


}

void Library::alphabeticalOrderMember()
{
	for (int i = 0; i < getNoOfmembers(); i++)
	{
		for (int j = i + 1; j < getNoOfmembers(); j++)
		{
			if ((int)memberList[i][0] >(int)memberList[j][0])
			{
				exchangeMember(i, j);
			}
		}
	}
}

void Library::exchangeMember(int i, int j)
{

	int tId;
	char tmN[100];
	string tCat;
	int bA;
	Date tIdate;
	Date tRdate;

	strcpy_s(tmN, memberList[i].getMemberName());
	memberList[i].setMemberName(memberList[j].getMemberName());
	memberList[j].setMemberName(tmN);

	tCat= memberList[i].getCategory();
	memberList[i].setCategory(memberList[j].getCategory());
	memberList[j].setCategory(tCat);


	bA = memberList[i].getBookAllow();
	memberList[i].setBookAllowed(memberList[j].getBookAllow());
	memberList[j].setBookAllowed(bA);

	tIdate.day= memberList[i].getIssuanceDay();
	tIdate.month= memberList[i].getIssuanceMonth();
	tIdate.year = memberList[i].getIssuanceYear();
	memberList[i].setIssuanceDate(memberList[j].getIssuanceDay(), memberList[j].getIssuanceMonth(), memberList[j].getIssuanceYear());
	memberList[j].setIssuanceDate(tIdate.day, tIdate.month, tIdate.year);

	tId = memberList[i].getMemberId();
	memberList[i].setMemberId(memberList[j].getMemberId());
	memberList[j].setMemberId(tId);


}

void Library::saveLibrary()
{
	ofstream o("Library.txt",ios::app);
	o << noOfBooks << " ";
	for (int i = 0; i < noOfBooks; i++)
	{
		o << bookList[i].getBookTitle()<<"\n";
		o  << bookList[i].getAuthorName() << "\n";
		o  << bookList[i].getPublisherName() << "\n";
		o  << bookList[i].getBookCode()<<"\n" ;
	}
	o.close();
}

void Library::retreiveLibrary()
{
	
		ifstream o("Library.txt");
		if (o.fail())
		{
			cout << "\n File not Opened";
		}
		else
		{
			o >> noOfBooks;
			o.ignore();
			for (int i = 0; i < noOfBooks; i++)
			{
			
				o.getline(bookList[i].bookTitle, 100);
				o.getline(bookList[i].authorName, 100);
				o.getline(bookList[i].publisherName, 100);
				o >> bookList[i].bookCode;
				o.ignore();
			}
		}
	
}

void Library::saveMembers()
{
	ofstream o("member.dat", ios::binary);
	o.write((char*)&noOfMembers,sizeof(noOfMembers));
	o.write((char*)memberList, sizeof(memberList));
	o.close();
}

void Library::retreiveMembers()
{
	ifstream i("member.dat", ios::binary);
	i.read((char*)&noOfMembers, sizeof(noOfMembers));
	i.read((char*)memberList, sizeof(memberList));

}
