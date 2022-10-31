#ifndef __BOARD__
#define __BOARD__


class Board {
private:
	int theBoard[7];
	int moveCount;

public:
	Board();

	int getInput();
	int getSlotState(int);
	int getColor(int);
	int getWhitePos();
	int getMoveCount();

	bool setWhitePos();

	void incrementMoveCount();
	bool moveToken(int);
	bool isSolved();
	bool isGimped();
};

#endif