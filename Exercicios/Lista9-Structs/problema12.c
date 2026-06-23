#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CARTAS 52
#define JOGADORES 2
#define CARTAS_POR_JOGADOR 5

typedef struct {
    char naipe[15];
    char valor[5];
} Carta;

int main() {

    Carta baralho[TOTAL_CARTAS];
    Carta jogadores[JOGADORES][CARTAS_POR_JOGADOR];

    char naipes[4][15] = {"Copas", "Ouros", "Espadas", "Paus"};

    char valores[13][5] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    int i, j, k = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 13; j++) {

            sprintf(baralho[k].naipe, "%s", naipes[i]);
            sprintf(baralho[k].valor, "%s", valores[j]);

            k++;
        }
    }

    srand(time(NULL));

    for(i = 0; i < TOTAL_CARTAS; i++) {

        int r = rand() % TOTAL_CARTAS;

        Carta aux = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = aux;
    }

    k = 0;

    for(i = 0; i < JOGADORES; i++) {

        for(j = 0; j < CARTAS_POR_JOGADOR; j++) {

            jogadores[i][j] = baralho[k];
            k++;
        }
    }

    for(i = 0; i < JOGADORES; i++) {

        printf("\nJogador %d:\n", i + 1);

        for(j = 0; j < CARTAS_POR_JOGADOR; j++) {

            printf("%s de %s\n", jogadores[i][j].valor, jogadores[i][j].naipe);
        }
    }

    return 0;
}