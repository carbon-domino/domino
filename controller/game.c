#include <stdio.h>
#include <stdlib.h> 
#include "components/Piece.h"

struct Piece bank[28];
struct Piece playerOne[21];
struct Piece playerTwo[21];
struct Piece board[28];
struct Piece usedPieces[28];

void newGame() {
    fillPieces(bank[28]);
}