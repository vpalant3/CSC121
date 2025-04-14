//
//  BoatFunctions.h
//  Battle Boats
//
//  Created by Vladislav Palant on 4/13/25.
//

#ifndef BOATFUNCTIONS_H
#define BOATFUNCTIONS_H

#include <string>

#define SIZE 4

extern const std::string EMPTY;
extern const std::string HIT;
extern const std::string MISS;


class Board {
private:

    std::string grid[SIZE][SIZE];
   
    std::string boatSymbol;

public:
    
    Board(const std::string &symbol);

  
    void placeBoat(int row, int col);

  
    bool markGuess(int row, int col);

   
    bool isBoatStillFloating() const;

    
    void printBoard(bool hideBoats) const;
};


bool readCell(const std::string &input, int &row, int &col);


std::string chooseBoatSymbol();


bool askToPlayAgain();

#endif 
