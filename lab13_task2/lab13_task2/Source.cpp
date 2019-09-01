#include<fstream>
#include<iostream>
#include<string>
using namespace std;
void output(char*file)
{
	
	ifstream fin(file,ios::in);
	ofstream fo("output.txt");
	if (fin.fail())
	{
		cout << "\n Failed";
	}
	char ch;
	char choice;
	cout << "Enter S for single and D for double comment(S/D) ";
	cin >> choice;
	if(choice=='D' ||choice=='d')
	{ 
		while (!(fin.eof()))
		{
			fin >> ch;
			if (ch == '/')
			{

				fin >> ch;
				if (ch == '*')
				{
					string s;
					getline(fin, s,'*');
					fo << s;
				}


			}


		}
	}
	fin.seekg(0,ios::beg);
	if (choice == 'S' || choice == 's')
	{
		while (!(fin.eof()))
		{
			fin >> ch;
			if (ch == '/')
			{

				fin >> ch;
				if (ch == '/')
				{
					//string s;
					//getline(fin, s,'/');
					char s[100];
					fin.getline(s, 100, '/');
					fo << s;

				}


			}


		}
	}

}




int main()
{
	
	output("temp.cpp");
}
