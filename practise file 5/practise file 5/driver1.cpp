#include<iostream>
#include"tic tac toe.h"
#include"time.h"
using namespace std;
enum playerTurn{player1,player2};
enum gameStatus{draw,win,inProgress};
int main()
{
	ticTacToe t;
	t.playGame();
}