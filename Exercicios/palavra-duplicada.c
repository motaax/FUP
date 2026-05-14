#include <stdio.h>
#include <string.h>

int main() {
    char palavra[101];
    int i, tam, metade;
    int duplicada = 1;

    scanf("%s", palavra);

    tam = strlen(palavra);

    if (tam % 2 != 0) {
        duplicada = 0;
    } else {
        metade = tam / 2;

        for (i = 0; i < metade; i++) {
            if (palavra[i] != palavra[i + metade]) {
                duplicada = 0;
                break;
            }
        }
    }

    if (duplicada) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    return 0;
}