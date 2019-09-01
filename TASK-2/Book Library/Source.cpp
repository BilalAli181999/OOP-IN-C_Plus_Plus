//NAME:BILAL ALI
//ROLL NO:BCSF16A030


#include<iostream>
#include<string>
//#include"book.h"
#include"member.h"
#include"library.h"
using namespace std;
 int Book::bC=0;//static variables to auto number objects created
 int Member::mI = 0;
 void enterBooks(Library &l);
 void enterMembers(Library &l);


 int main()
 {
	 Library l;
	 int ch;
	 l.setCurrentDate(15, 5, 2017);
	 do
	 {
		 cout << "\nExit----->     Press 0";
		 cout << "\nEnter Books----->     Press 1";
		 cout << "\nEnter Members----->     Press 2";
		 cout << "\nDisplay Book List----->     Press 3";
		 cout << "\nDisplay Member List----->     Press 4";
		 cout << "\nSort members Alphabetically----->     Press 5";
		 cout << "\nGet Returning Members----->     Press 6";
		 cout << "\nSort BOOK Alphabetically----->     Press 7";
		 cout << "\nFind By Book Name----->     Press 8";
		 cout << "\nDisplay by Author Name----->     Press 9";
		 cout << "\nDisplay by Publisher Name----->     Press 10";
		 cout << "\nSave Library----->     Press 11";
		 cout << "\nRetreive Library----->     Press 12";
		 cout << "\nSave Members----->     Press 13";
		 cout << "\nRetreive Members----->     Press 14";

		
		 cin >> ch;
		 cin.ignore();
		 if (ch == 1)
		 {
			 enterBooks(l);
		 }
		 else if (ch == 2)
		 {
			 enterMembers(l);
		 }
		 else if (ch == 3)
		 {
			 l.displayBookList();
		 }
		 else if (ch == 4)
		 {
			
			 l.displayMemberList();
		 }
		 else if (ch == 5)
		 {
			 l.alphabeticalOrderMember();
			 l.displayMemberList();
		 }
		 else if (ch == 6)
		 {
			 l.getReurningMembers();
		 }
		 else if (ch == 7)
		 {
			 l.alphabeticalOrderBook();
			 l.displayBookList();
		 }
		 else if (ch == 8)
		 {
			 l.findByName("c++");
		 }
		 else if (ch == 9)
		 {
			 l.findByAuthorName("tony gadis");
		 }
		 else if (ch == 10)
		 {
			 l.findByPublisherName("aone");
		 }
		 else if (ch == 11)
		 {
			 l.saveLibrary();
		 }
		 else if (ch == 12)
		 {
			 l.retreiveLibrary();
		 }
		 else if (ch == 13)
		 {
			 l.saveMembers();
		 }
		 else if(ch==14)
		 { 
			 l.retreiveMembers();
		 }

	 } while (ch!=0);
 }






void enterBooks(Library &l)//global function to enter books
{
	char choice;
	do
	{
		l.addBooks();
		
		cout << "\n Do you want to Enter Again (Y/N)";
		cin >> choice;
		cin.ignore();
	} while (choice == 'y' || choice == 'Y');
	
}
void enterMembers(Library& l)//global function to enter members in library
{
	char choice;
	do
	{
		
		l.addMembers();
		
		cout << "\n Do you want to Enter Again (Y/N)";
		cin>>choice;
		cin.ignore();
		
	} while (choice == 'y' || choice == 'Y');

}
