#include "productionWorker.h"
#include "teamleader.h"
#include<iostream>
using namespace std;
#include<string>

//task-1

int main()
{
	string n;
	
	n = "Bilal Ali";
	
	
	ProductionWorker p(2,200,n,8210);
	p.display();

}


//task-2


//int main()
//{
//	string n = "BILAL ALI";
//	TeamLeader t(10000,50,65,1,200,n,8210);
//	t.display();
//}