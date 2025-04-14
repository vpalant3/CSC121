//
//  main.cpp
//  BoatTests
//
//  Created by Vladislav Palant on 4/13/25.
//

#include "boatfunctions.h"
#include <iostream>

int main() {
    std::cout << "Running some quick tests on the Board class...\n\n";

    Board testBoard("🚢");

    std::cout << "Initial Board:\n";
    testBoard.printBoard(false);

    testBoard.placeBoat(0, 0);
    std::cout << "\nAfter placing boat at A1:\n";
    testBoard.printBoard(false);

 
    bool hit = testBoard.markGuess(0, 0);
    std::cout << "\nGuess on A1 is a hit? " << (hit ? "Yes" : "No") << "\n";
    testBoard.printBoard(false);

    hit = testBoard.markGuess(2, 2);
    std::cout << "\nGuess on C3 is a hit? " << (hit ? "Yes" : "No") << "\n";
    testBoard.printBoard(false);

    bool stillFloating = testBoard.isBoatStillFloating();
    std::cout << "\nBoat still floating? "
              << (stillFloating ? "Yes" : "No") << "\n";

    std::cout << "\nEnd of tests.\n";
    return 0;
}
