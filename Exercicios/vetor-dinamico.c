#include <stdio.h>
#include <stdlib.h>

int main() {
    float *vet = NULL;
    float num, soma = 0, media;
    int n = 0, i;

    while (1) {
        scanf("%f", &num);

        if (num < 0)
            break;

        n++;

        vet = (float *) realloc(vet, n * sizeof(float));

        vet[n - 1] = num;
        soma += num;
    }

    if (n > 0)
        media = soma / n;
    else
        media = 0;

    printf("%.2f\n", media);

    for (i = 0; i < n; i++) {
        printf("%.2f", vet[i]);

        if (i < n - 1)
            printf(" ");
    }

    printf("\n");

    free(vet);

    return 0;
}