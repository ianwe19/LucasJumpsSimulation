#include "specification.h"
#include <vector>


const int RED = 0;
const int WHITE = 1;
const int BLUE = 2;


Board::Board() {

	this->theBoard[0] = RED;
	this->theBoard[1] = RED;
	this->theBoard[2] = RED;
	this->theBoard[3] = WHITE;
	this->theBoard[4] = BLUE;
	this->theBoard[5] = BLUE;
	this->theBoard[6] = BLUE;

	this->moveCount = 0;
}

int Board::getInput() {

}

int Board::getSlotState(int slot) {
	return this->theBoard[slot];
}

int Board::getColor() {
	return 0;
}

int Board::getWhitePos() {
	return 0;
}

int Board::getMoveCount() {
	return 0;
}

bool Board::setWhitePos() {
	return false;
}

void Board::incrementMoveCount() {
	this->moveCount++;
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
