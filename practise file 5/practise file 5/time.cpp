////
//#include<iostream>
//#include"time.h"
//#include"tic tac toe.h"
//using namespace std;
//time::time(int s)
//{
//	if (isTime())
//		seconds = s;
//}
//
//void time::setTime(int s)
//{
//	if (s > 0)
//		seconds = s;
//}
//bool time:: isTime()
//{
//	
//	if (seconds < 43000)
//		return  true;
//}
//int time::getTime()
//{
//	if(isTime())
//	return seconds;
//
//}
//
//void time::displayTime()const
//{
//	
//		int h, m, s;
//		h = seconds / 3600;
//		m = (seconds % 3600) / 60;
//		s = ((seconds % 3600) % 60);
//		cout << h << ":" << m << ":" << s;
//	
//}

 #include<iostream>
#include"time.h"
#include"tic tac toe.h"

using namespace std;
void ticTacToe::playGame()
{

	for (int i = 0; i < game.getCount() && !(game.isWin()); i++)
	{
		if (i % 2 == 0)
		{
			cout << "Player-1 Enter the row,column";
			int row, col;
			cin >> row >> col;
			game.markGameBoard(row, col, 'x');
		}
		else
		{
			cout << "Player-2 Enter the row,column";
			int row, col;
			cin >> row >> col;
			game.markGameBoard(row, col, 'y');
		}
	}

}
