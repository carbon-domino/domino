#include <stdio.h>
#include "../model/gameModel.h"
#include "display.h"

struct Piece bank[28];
struct Piece playerOne[21];
struct Piece playerTwo[21];
struct Piece board[28];
struct Piece usedPieces[28];

void newGame() {
    fillPieces(bank);

    for (int x = 0; x < 28; x++) {
        showDisplay(bank[x]);
    }
}