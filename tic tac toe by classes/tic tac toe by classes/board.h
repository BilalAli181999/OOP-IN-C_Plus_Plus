#ifndef BOARD_H
#define BOARD_H


class gameBoard
{
private:
	char board[3][3];

	int count = 0;
public:
	 gameBoard();
	 int getCount()
	 {
		 return count;
	 }
	 void markGameBoard(int r, int c, char symbol);
	
	 bool isAlreadyMarked(int, int);
	 bool isWin();
	 void display();



};
#endif // !BOARD-H
