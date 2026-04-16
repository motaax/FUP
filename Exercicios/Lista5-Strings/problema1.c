#include <stdio.h>

int main() {
    char nome[100];
    nome[0] = 'F';
    nome[1] = 'E';
    nome[2] = 'L';
    nome[3] = 'I';
    nome[4] = 'P';
    nome[5] = 'E';
    nome[6] = '\0';

    printf("Oi, eu sou %s! \n", nome);

    return 0;
}