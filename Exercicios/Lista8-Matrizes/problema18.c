#include <stdio.h>

int main() {
    int matriz[3][3];
    int vetor[3] = {0, 0, 0};

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            vetor[j] += matriz[i][j];
        }
    }

    printf("Vetor das somas das colunas:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}