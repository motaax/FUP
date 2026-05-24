#include <stdio.h>

int main() {
    int vetor[5];
    int *p;

    for (p = vetor; p < vetor + 5; p++) {
        printf("Digite um valor: ");
        scanf("%d", p);
    }

    printf("\nDobro dos valores:\n");
    for (p = vetor; p < vetor + 5; p++) {
        printf("%d\n", (*p) * 2);
    }

    return 0;
}