#include <stdio.h>
#include <stdlib.h> 
#include "components/Piece.h"

struct Piece bank[28];
struct Piece playerOne[21];
struct Piece playerTwo[21];
struct Piece board[28];
struct Piece usedPieces[28];


void fillPieces() {
    int counter = 0;

    for (int x = 0; x <= 6; x++) {
        for (int z = x; z <= 6; z++) {
            struct Piece p;

            p.SideA = x;
            p.SideB = z;

            bank[counter] = p;

            counter++;
        }
    }
}

void newGame() {
    fillPieces();
}

