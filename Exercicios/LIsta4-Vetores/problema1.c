#include <stdio.h>

int main() {
    int A[6];
    int i = 0;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    printf("Valores do vetor A:\n");
    i = 0;
    while (i < 6) {
        printf("A[%d] = %d\n", i, A[i]);
        i++;
    }

    int soma = A[0] + A[1] + A[5];
    printf("\nSoma de A[0] + A[1] + A[5] = %d\n", soma);

    A[4] = 100;

    printf("\nVetor A modificado:\n");
    i = 0;
    while (i < 6) {
        printf("A[%d] = %d\n", i, A[i]);
        i++;
    }

    int esq, dir, somaIntervalo = 0;

    printf("\nDigite as posicoes esq e dir: ");
    scanf("%d %d", &esq, &dir);

    i = esq;
    while (i <= dir) {
        somaIntervalo += A[i];
        i++;
    }

    printf("Soma do intervalo A[%d] ate A[%d] = %d\n", esq, dir, somaIntervalo);

    return 0;
}