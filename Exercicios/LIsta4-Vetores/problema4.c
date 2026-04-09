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

    int ordenado = 1;
    i = 0;

    while (i < N - 1) {
        if (vetor[i] > vetor[i + 1]) {
            ordenado = 0;
            break;
        }
        i++;
    }

    if (ordenado) {
        printf("\nO vetor está em ordem crescente.\n");
    } else {
        printf("\nO vetor NÃO está em ordem crescente.\n");
    }

    return 0;
}