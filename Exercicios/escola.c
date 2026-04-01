#include <stdio.h>

int main() {
    int N, idade, nao_adultos = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &idade);
        if (idade < 18) {
            nao_adultos++;
        }
    }

    printf("%d\n", nao_adultos);

    return 0;
}