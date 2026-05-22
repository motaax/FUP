#include <stdio.h>

int main() {
    int vetor[100];
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int s = 0;
    for(int i = 0; i < n; i++) {
        s += vetor[i];
    }

    printf("A soma do vetor: %d\n", s);

    return 0;
}