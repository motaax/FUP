#include <stdio.h>

int main() {
    int matriz[4][4];
    int cont = 0;

    // Ler
    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            printf("Digite o valor da linha %d coluna %d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    // Exibir e contar
    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            printf("%d ", matriz[l][c]);

            if(matriz[l][c] > 10) {
                cont++;
            }
        }
        printf("\n");
    }

    printf("\nValores maiores que 10: %d\n", cont);

    return 0;
}