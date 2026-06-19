#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Tamanho do int: %ld\n", sizeof(int));
    int *v = malloc(10 * sizeof(int)); //Vetor de 10 inteiros
    v = realloc(v, 20 * sizeof(int)); //Alterar o tamanho do vetor para 20 inteiros
    v = realloc(v, 5 * sizeof(int)); //Alterar o tamanho do vetor para 5 inteiros

    free(v); //Libera o espaço da memória utilizada pelo vetor

    return 0;
}