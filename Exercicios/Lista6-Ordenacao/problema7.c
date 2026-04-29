#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int vet[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(vet[j] < vet[j + 1]) {
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    int pontosAna = 0, pontosBeto = 0;

    for(i = 0; i < n; i++) {
        if(i % 2 == 0) {
            pontosAna += vet[i];
        } else {
            pontosBeto += vet[i];
        }
    }

    if(pontosAna > pontosBeto) {
        printf("Ana vence\n");
    } else if(pontosBeto > pontosAna) {
        printf("Beto vence\n");
    } else {
        printf("Empate!\n");
    }

    printf("Pontos da Ana: %d\n", pontosAna);
    printf("Pontos do Beto: %d\n", pontosBeto);

    return 0;
}