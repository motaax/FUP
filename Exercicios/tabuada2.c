#include <stdio.h>

int main() {
    int numeros[3] = {4, 7, 9};

    for (int i = 0; i < 3; i++) {
        printf("Tabuada de %d:\n", numeros[i]);

        for (int j = 1; j <= 10; j++) {
            printf("%dx%d=%d\n", numeros[i], j, numeros[i] * j);
        }
    }

    return 0;
}