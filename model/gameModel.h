#ifndef DOMINO_GAMEMODEL_H
#define DOMINO_GAMEMODEL_H
#endif //DOMINO_GAMEMODEL_H

#include "Piece.h"

typedef struct Piece {
    int SideA;
    int SideB;
} Piece;

typedef struct Player {
    struct Piece hand[7];
};

void fillPieces(struct Piece bank[]);