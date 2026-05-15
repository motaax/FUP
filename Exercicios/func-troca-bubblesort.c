#include <stdio.h>

void trocaSeMaior(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int vetor[100];
    int n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Bubble Sort
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            trocaSeMaior(&vetor[j], &vetor[j + 1]);
        }
    }

    printf("\nVetor depois de ordenar:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}