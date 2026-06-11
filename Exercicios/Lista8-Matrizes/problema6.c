#include <stdio.h>

int main() {
    int matriz1[4][4];
    int matriz2[4][4];
    int matriz3[4][4];

    // Ler matriz 1
    printf("Digite os valores da Matriz 1:\n");
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            scanf("%d", &matriz1[l][c]);
        }
    }

    // Ler matriz 2
    printf("Digite os valores da Matriz 2:\n");
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            scanf("%d", &matriz2[l][c]);
        }
    }

    // Matriz 3
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            if (matriz1[l][c] > matriz2[l][c]) {
                matriz3[l][c] = matriz1[l][c];
            } else {
                matriz3[l][c] = matriz2[l][c];
            }
        }
    }

    // Exibir Matriz 3
    printf("Matriz 3: \n");
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            printf("%4d ", matriz3[l][c]);
        }
        
        printf("\n");
    }

    return 0;
}