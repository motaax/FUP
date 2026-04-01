#include <stdio.h>

int main() {
    int A, B, contador = 0;

    scanf("%d %d", &A, &B);

    if (B == 0 && A == 0) {
        contador = 1;
    } else {
        while (B != 0) {
            if (B % 10 == A) {
                contador++;
            }
            B /= 10;
        }
    }

    printf("%d\n", contador);

    return 0;
}