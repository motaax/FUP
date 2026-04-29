#include <stdio.h>

int main() {
    int n, i, j;
    double D;

    scanf("%lf", &D);
    scanf("%d", &n);

    double vet[n];

    for(i = 0; i < n; i++) {
        scanf("%lf", &vet[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(vet[j] > vet[j + 1]) {
                double temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    int quantidade = 0;
    double soma = 0;

    for(i = 0; i < n; i++) {
        if(soma + vet[i] <= D) {
            soma += vet[i];
            quantidade++;
        } else {
            break;
        }
    }

    printf("Compra %d produto(s)\n", quantidade);

    return 0;
}