#include <stdio.h>

int main() {
    float lado1;

    printf("Digite um valor qualquer: \n");
    scanf("%f", &lado1);

    float area = lado1 * lado1;

    printf("A area do quadrado e: %.2f \n", area);

    return 0;
}