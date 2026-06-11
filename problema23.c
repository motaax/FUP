#include <stdio.h>

int main() {
    int A[3][3], B[3][3];
    int i, j;

    printf("Digite os elementos da matriz A: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            B[i][j] = A[i][j] * A[i][j];
        }
    }

    printf("Matriz B: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}