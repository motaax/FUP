#include <stdio.h>

int main() {
    int n1,n2,n3;

    printf("Digite tres numeros inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    int sum = n1 + n2 + n3;
    printf("A soma dos tres numeros e : %d \n", sum);

    return 0;
}