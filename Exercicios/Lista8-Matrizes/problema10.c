#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;

    printf("Digite os valores da Matriz:\n");
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &matriz[l][c]);

            if(l == c) {
                soma += matriz[l][c];
            }
        }
    }

    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            printf("%d ", matriz[l][c]);
        }

        printf("\n");
    }

    printf("A soma dos elementos da diagonal principal e: %d", soma);

    return 0;
}