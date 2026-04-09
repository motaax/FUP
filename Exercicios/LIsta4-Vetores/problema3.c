#include <stdio.h>

int main() {
    int N, i = 0;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &N);

    int vetor[N];

    i = 0;
    while (i < N) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetor[i]);
        i++;
    }

    int maior = vetor[0];
    int menor = vetor[0];

    i = 1;
    while (i < N) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        i++;
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}