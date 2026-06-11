#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char nome[101];
    char menor[101];

    scanf("%d", &N);

    scanf("%s", menor);

    for (int i = 1; i < N; i++) {
        scanf("%s", nome);

        if (strcmp(nome, menor) < 0) {
            strcpy(menor, nome);
        }
    }

    printf("%s\n", menor);

    return 0;
}