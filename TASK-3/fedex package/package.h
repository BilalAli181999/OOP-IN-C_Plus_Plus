//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>
#include<string>
using namespace std;

class package
{
private:
	string name;
	string address;
	string city;
	string state;
	int zipCode;
	double weight;
	double costPerOunce;
public:
	package();
	package(string n, string a, string c, string s, int zC, double w, double cpo);
	double calculateCost();
	void setName(string n);
	void setAddress(string a);
	void setCity(string c);
	void setState(string s);
	void setZipcode(int z);
	void setWeight(double w);
	void setCpO(double cpo);
	string getName();
	string getAddress();
	string getCity();
	string getState();
	int getZipCode();
	double getWeight();
	double getCpO();
	void display();
	
};

#endif
