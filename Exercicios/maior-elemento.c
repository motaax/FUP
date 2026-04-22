#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int quantidade = 1;

    for (int i = 1; i < N; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            quantidade = 1;
        } else if (vetor[i] == maior) {
            quantidade++;
        }
    }

    printf("Valor: %d\n", maior);
    printf("Quantidade: %d\n", quantidade);

    return 0;
}