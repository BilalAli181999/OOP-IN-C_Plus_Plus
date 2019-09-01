#include<iostream>
#include"board.h"
#include"game.h"
using namespace std;
enum playerTurn{player1,player2};
enum gameStatus{draw,win,inProgress};
int main()
{
	ticTacToe t;
	t.playGame();
}