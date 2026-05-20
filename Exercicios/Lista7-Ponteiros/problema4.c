#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    printf("Antes da troca: A = %d, B = %d\n", A, B);

    trocar(&A, &B);

    printf("Depois da troca: A = %d, B = %d\n", A, B);

    return 0;
}