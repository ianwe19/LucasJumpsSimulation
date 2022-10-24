#include "specification.h"
#include <vector>


const int RED = 0;
const int WHITE = 1;
const int BLUE = 2;


Board::Board() {
	this->boardArray = { RED, RED, RED, WHITE, BLUE, BLUE, BLUE };
}

int Board::getSlotState(int slot) {
	return this->boardArray[slot];
}

int Board::getColor() {
	return 0;
}

int Board::getWhitePos() {
	return 0;
}

bool Board::setWhitePos() {
	return false;
}

bool Board::moveToken(int pos) {
	return false;
}

bool Board::isSolved() {
	return false;
}

bool Board::isGimped() {
	return false;
}
