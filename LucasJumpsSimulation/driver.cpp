#include "specification.h"
#include <iostream>
#include <iomanip>


void printBoard(Board);


int main()
{
    int slotNum = 0;

    Board board0;

    printBoard(board0);

    slotNum = board0.getInput();
}


void printBoard(Board board0) {
    for (int i = 0; i < 7; i++) {
        std::cout << board0.getSlotState(i) << " ";
    }
    std::cout << "\nMove count: " << board0.getMoveCount() << "\n";
}
