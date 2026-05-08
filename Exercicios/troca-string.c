#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100], temp[100];

    scanf("%s", A);
    scanf("%s", B);

    strcpy(temp, A);
    strcpy(A, B);
    strcpy(B, temp);

    printf("%s\n", A);
    printf("%s\n", B);

    return 0;
}