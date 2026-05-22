#include <stdio.h>

int soma_vetor(int v[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += v[i];
    }

    return s;
}

int main() {
    int vetor[100];
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int s = soma_vetor(vetor, n);
    printf("A soma do vetor: %d\n", s);

    return 0;
}