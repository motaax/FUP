#include <stdio.h>

int main() {
    int n, m, soma = 0;

    printf("Digite o numero de linhas: \n");
    scanf("%d", &n);
    printf("Digite o numero de colunas: \n");
    scanf("%d", &m);

    int matriz[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d ", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("Soma dos elementos: %d", soma);

    return 0;
}