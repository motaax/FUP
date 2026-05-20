#include <stdio.h>

int dobroESoma(int *a, int *b) {
    *a = (*a) * 2;
    *b = (*b) * 2;

    return *a + *b;
}

int main() {
    int A, B, soma;
    scanf("%d %d", &A, &B);

    soma = dobroESoma(&A, &B);

    printf("Dobro de A = %d\n", A);
    printf("Dobro de B = %d\n", B);
    printf("Soma dos dobros = %d\n", soma);

    return 0;
}