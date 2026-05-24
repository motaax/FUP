#include <stdio.h>

void soma(int *A, int B) {
    *A = *A + B;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    soma(&A, B);

    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}