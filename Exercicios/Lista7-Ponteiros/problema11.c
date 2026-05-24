#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nEnderecos das posicoes com valores pares:\n");

    for (i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("vetor[%d] = %d -> endereco: %p\n", i, vetor[i], (void *)&vetor[i]);
        }
    }

    return 0;
}