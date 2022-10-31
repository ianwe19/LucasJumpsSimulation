#include "specification.h"
#include <iostream>


const int PUZZLE_SIZE = 7;

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
	int num = 0;

	while (!(std::cin) || num < 1 || num > PUZZLE_SIZE) { // for input sanitization
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
