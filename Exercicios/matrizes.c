#include <stdio.h>

int main() {
    int linhas, colunas;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int A[linhas][colunas];
    int B[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        printf("[ ");
        for (int j = 0; j < colunas; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("]\n");
    }

    return 0;
}