#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    long long maiorValor = -1;
    int colunaMaior = 0;

    for (int j = 0; j < N; j++) {
        long long soma = 0;

        for (int i = 0; i < N; i++) {
            soma += (long long)mat[i][j] * mat[i][j];
        }

        if (j == 0 || soma > maiorValor) {
            maiorValor = soma;
            colunaMaior = j;
        }
    }

    printf("%d\n", colunaMaior);

    return 0;
}