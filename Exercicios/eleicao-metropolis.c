#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char candidatos[n][50];
    int votos[n];
    int maior = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", candidatos[i], &votos[i]);

        if (votos[i] > maior) {
            maior = votos[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (votos[i] == maior) {
            printf("%s\n", candidatos[i]);
        }
    }

    return 0;
}