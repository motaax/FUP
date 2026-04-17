#include <stdio.h>

int main() {
    int N, i, acima = 0;
    float vetor[100], soma = 0, media;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / N;

    for(i = 0; i < N; i++) {
        if(vetor[i] > media) {
            acima++;
        }
    }

    printf("%d\n", acima);

    return 0;
}