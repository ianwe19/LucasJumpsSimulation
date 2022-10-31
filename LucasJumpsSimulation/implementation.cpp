#include "specification.h"
#include <iostream>


const int BOARD_SIZE = 7;

const int RED = 11;
const int WHITE = 22;
const int BLUE = 33;


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
	int num = 0;

	while (!(std::cin) || num < 1 || num > BOARD_SIZE) { // for input sanitization
		std::cin.clear();
		std::cout << "Enter a slot number to move (1-7): ";
		std::cin >> num;
		rewind(stdin); // clear buffer
	}

	return num;
}


int Board::getSlotState(int slot) {
	return this->theBoard[slot];
}


int Board::getColor(int slot) {
	return 0;
}


int Board::getWhitePos() {
	return 0;
}


int Board::getMoveCount() {
	return this->moveCount;
}


bool Board::setWhitePos() {
	return false;
}


void Board::incrementMoveCount() {
	this->moveCount++;
}


bool Board::moveToken(int slot) {
	return false;
}


bool Board::isSolved() {
	for (int i = 0; i < BOARD_SIZE; i++) {
		if (i <= 2) {
			if (this->theBoard[i] != RED) {
				return false;
			}
		}
		else if (i == 3) {
			if (this->theBoard[i] != WHITE) {
				return false;
			}
		}
		else {
			if (this->theBoard[i] != BLUE) {
				return false;
			}
		}
	}

	return true;
}


bool Board::isGimped() {
	return false;
}
