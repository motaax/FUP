#include <stdio.h>

int negativos(float *vet, int N) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            count++;
        }
    }

    return count;
}

int main() {
    float valores[] = {3.5, -2.1, 0.0, -7.8, 4.2};
    int N = 5;

    int qtdNegativos = negativos(valores, N);

    printf("Quantidade de numeros negativos: %d\n", qtdNegativos);

    return 0;
}