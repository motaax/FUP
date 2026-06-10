#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior;
    int linhaMaior = 0, colunaMaior = 0;

    // Ler
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            printf("Digite o valor da linha %d coluna %d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    // Exibir
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            printf("%4d ", matriz[l][c]);
        }
        printf("\n");
    }

    maior = matriz[0][0];

    // Procura o maior valor
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            if (matriz[l][c] > maior) {
                maior = matriz[l][c];
                linhaMaior = l;
                colunaMaior = c;
            }
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Localizacao: linha %d, coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}