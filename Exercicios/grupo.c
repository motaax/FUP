#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int idade;
    int temAdulto = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &idade);

        if (idade >= 18) {
            temAdulto = 1;
        }
    }

    if (temAdulto) {
        printf("Apto\n");
    } else {
        printf("Inapto\n");
    }

    return 0;
}