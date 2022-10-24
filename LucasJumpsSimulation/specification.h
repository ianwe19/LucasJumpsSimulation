#ifndef __BOARD__
#define __BOARD__

#include <vector>


class Board {
private:
	std::vector<int> boardArray;

public:
	Board();

	int getSlotState(int);
	int getColor();
	int getWhitePos();

	bool setWhitePos();

	bool moveToken(int);
	bool isSolved();
	bool isGimped();
};

#endif