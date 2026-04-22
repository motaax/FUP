#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int indice = 0;

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            indice = i;
        }
    }

    printf("Valor: %d\n", maior);
    printf("Ultimo indice: %d\n", indice);

    return 0;
}