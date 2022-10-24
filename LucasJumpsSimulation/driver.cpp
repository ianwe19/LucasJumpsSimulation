#include "specification.h"
#include <iostream>
#include <iomanip>


void printBoard(Board);


int main()
{
    Board board0;

    printBoard(board0);
}


void printBoard(Board board0) {
    for (int i = 0; i < 7; i++) {
        std::cout << board0.getSlotState(i) << " ";
    }
}
