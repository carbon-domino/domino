//
// Created by Caio Baracat on 23/09/20.
//

#include "time.h"
#include "stdlib.h"
#include "gameModel.h"

void fillPieces(struct Piece bank[]) {
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

int randomAccess(int min, int max) {
    srand(time(0));
    return (rand() % (max - min + 1)) + min;
}


