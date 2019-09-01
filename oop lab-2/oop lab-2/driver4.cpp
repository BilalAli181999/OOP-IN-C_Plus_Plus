//#include<iostream>
//#include"task4.h"
//using namespace std;
//int main()
//{
//	saleItem si;
//	tester(si);
//	int arrSize;
//			cout << "\n\n\tEnter the size for array";
//			cin >> arrSize;
//			saleItem *d2 = new saleItem[arrSize];
//			int *id=new int [arrSize];
//			int *quantity = new int[arrSize];
//			double *price = new double[arrSize];
//			char** string;
//			string = new char*[arrSize];
//				for (int i = 0; i < arrSize; i++)
//				{
//					string[i] = new char[41];
//				}
//			
//			
//			
//	
//			for (int i = 0; i < arrSize; i++)
//			{
//				cout << "\nEnter id:";
//				cin >> id[i];
//				
//				d2[i].setId(id[i]);
//				cin.ignore();
//				cout << "\n Enter name of product";
//				cin.getline(string[i], 41);
//				d2[i].setName(string[i]);
//				cout << "\nEnter quantity:";
//				cin >> quantity[i];
//				d2[i].setQuantity(quantity[i]);
//				cout << "\nEnter price:";
//				cin >> price[i];
//				d2[i].setPrice(price[i]);
//	
//			}
//			for (int i = 0; i < arrSize; i++)
//			{
//				cout << "\n";
//				d2[i].displayInformation();
//				cout << "\n";
//			}
//			delete[]d2;
//			d2 = 0;
//			delete[] id;
//			id = 0;
//			delete[]quantity;
//			quantity = 0;
//			delete[]price;
//			price = 0;
//
//}