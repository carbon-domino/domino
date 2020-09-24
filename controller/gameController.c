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

void setNumberOfPlayers() {
    int players;
    askNumberOfPlayers();
    do {
        scanf("%d", &players);
        if (players == 1){
            // 1 player
        } else if (players == 2){
            // 2 players
        } else {
            askNumberOfPlayers();
        }
    } while (players != 1 || players != 2);
}