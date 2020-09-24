#include <stdio.h>
#include <Piece.h>

void showDisplay (struct Piece p) {
    printf("[ %d | %d ]\n", p.SideA, p.SideB);
}

void askNumberOfPlayers() {
    printf("Insira o numero de jogadores da partida:\n");
    printf("Digite [1] para 1 player:\n");
    printf("Digite [2] para 2 players:\n");
}