#include"student.h"
#include<iostream>
#include<fstream>
using namespace std;
void readData(Student & ref, fstream & str);
void writeData(Student & ref, ofstream & str);
void inputFromBinary(Student & ref, ifstream & str);
void binaryToText(Student & ref, ofstream & str);

int main()
{
	fstream f;
	f.open("students.txt",ios::out|ios::in);
	int noOfStudents;
	
	Student s;
	s(2, 4);
		f >> noOfStudents;
		Student *std = new Student[noOfStudents];

		for (int i = 0; i < noOfStudents; i++)
		{
			readData(std[i], f);
		}


	f.close();

	
	ofstream of;
	of.open("students.dat",ios::binary);
	
		for (int i = 0; i < noOfStudents; i++)
		{
			writeData(std[i],of);
		}
		ifstream inp;
		inp.open("students.dat",ios::binary);
		for (int i = 0; i < noOfStudents; i++)
		{
			inputFromBinary(std[i], inp);
		}
		ofstream out("newStudent.txt",ios ::binary);
		
			for (int i = 0; i < noOfStudents; i++)
			{
				binaryToText(std[i], out);
			}
		

	

}
void readData(Student & ref,fstream & str)
{
	str >> ref.rollNo;
//	cout <<"\n"<< ref.rollNo<<" ";
	str.getline(ref.name, 31);
//	cout <<ref.name<<"\n ";
	for (int i = 0; i < 5; i++)
	{
		str >> ref.marks[i];
//		cout << ref.marks[i] << " ";
	}
	
}
void writeData(Student & ref, ofstream & str)
{
	cout << "\n";
	str.write((char*)&ref.rollNo, sizeof(ref.rollNo));
	cout << " ";
	str.write((char*)&ref.name, sizeof(ref.name));
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		str .write((char*) &ref.marks[i],sizeof(ref.marks));
		
	}
}

void inputFromBinary(Student & ref, ifstream & str)
{
	str.read((char*)& ref.rollNo, sizeof(ref.rollNo));
	cout << "\n" << ref.rollNo << " ";
	str.read((char*)&ref.name, sizeof(ref.name));
	cout << ref.name << "\n ";
	for (int i = 0; i < 5; i++)
	{
		str.read((char*)&ref.marks[i], sizeof(ref.marks));
		cout << ref.marks[i] << " ";
	}
}

void binaryToText(Student & ref, ofstream & str)
{
	str << "\n\n";
	str << ref.rollNo << "\t ";
	str << ref.name << " \n\n ";
	for (int i = 0; i < 5; i++)
	{
		str << ref.marks[i]<<" \t";
		
	}
}
