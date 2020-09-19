#include <stdio.h>
#include <Piece.h>

void showDisplay (struct Piece p) {
    printf("[ %d | %d ]\n", p.SideA, p.SideB);
}