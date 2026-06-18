#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[21];
    int pontos;
} Restaurante;

char* escolher(Restaurante r[], int n) {
    int melhor = 0;

    for (int i = 1; i < n; i++) {
        if (r[i].pontos > r[melhor].pontos) {
            melhor = i;
        }
        else if (r[i].pontos == r[melhor].pontos) {
            if (strcmp(r[i].nome, r[melhor].nome) < 0) {
                melhor = i;
            }
        }
    }

    return r[melhor].nome;
}

int main() {
    int N;
    scanf("%d", &N);

    Restaurante r[N];

    for (int i = 0; i < N; i++) {
        scanf("%s %d", r[i].nome, &r[i].pontos);
    }

    printf("%s\n", escolher(r, N));

    return 0;
}