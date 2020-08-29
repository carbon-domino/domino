#include <stdio.h>
#include "components/main_menu.h"
#include "components/action_menu.h"
#include "game.c"

int main() {

    char option;

    do {
        showMainMenu();
        option = getchar();

        switch (option){
        case '1': printf("Iniciando novo jogo...\n");
            newGame();
            break;
        case '2': printf("Continuando\n");
            //call the function
            break;
        case '3': printf("Salvando jogo...\n");
            //call the function
            break;
        case '4': printf("Carregando jogo...\n");
            //call the function
            break;
        case '5': printf("Regras do jogo:\n");
            //call the function
            break;
        case '6': printf("Voce saiu do jogo.\n");
            break;
        }
    } while(option != '6');
    return 0;
}
