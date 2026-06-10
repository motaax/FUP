#include <stdio.h>

int main() {
    float matriz[3][6];
    float somaImpares = 0.0, soma = 0.0, media;

    printf("Digite os elementos da matriz 3x6:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        somaImpares += matriz[i][0];
        somaImpares += matriz[i][2];
        somaImpares += matriz[i][4];
    }

    printf("Soma dos elementos das colunas impares: %.2f\n", somaImpares);

    for (int i = 0; i < 3; i++) {
        soma += matriz[i][1]; 
        soma += matriz[i][3]; 
    }

    media = soma / 6.0; 

    printf("Media aritmetica das colunas 2 e 4: %.2f\n", media);

    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    printf("Matriz modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%8.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}