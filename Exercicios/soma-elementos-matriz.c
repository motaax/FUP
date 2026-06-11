#include <stdio.h>

int main() {
    int matriz[2][3];
    int soma = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d ", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("Soma: %d", soma);

    return 0;
}