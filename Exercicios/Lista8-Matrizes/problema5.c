#include <stdio.h>

int main() {
    int matriz[5][5];
    int x;
    int encontrado = 0;
    int linha, coluna;

    // Ler a matriz
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            printf("Digite o valor da linha %d coluna %d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    // Ler o valor X
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &x);

    // Buscar X na matriz
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            if (matriz[l][c] == x) {
                encontrado = 1;
                linha = l;
                coluna = c;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (encontrado) {
        printf("Valor encontrado na linha %d e coluna %d.\n", linha, coluna);
    } else {
        printf("Valor nao encontrado.\n");
    }

    return 0;
}