#ifndef __BOARD__
#define __BOARD__

#include <vector>


class Board {
private:
	std::vector<int> boardArray;
	int moveCount;

public:
	Board();

	int getSlotState(int);
	int getColor();
	int getWhitePos();
	int getMoveCount();

	bool setWhitePos();

	void incrementMoveCount();
	bool moveToken(int);
	bool isSolved();
	bool isGimped();
};

#endif