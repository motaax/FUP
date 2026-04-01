#include <stdio.h>

int main() {
    int A, B, soma = 0;

    scanf("%d %d", &A, &B);

    if (A > B) {
        printf("invalido\n");
    } else {
        for (int i = A; i <= B; i++) {
            if (i % 2 == 0) {
                soma += i;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}