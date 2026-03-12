#include <stdio.h>

int main() {
    float num, quadrado;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    quadrado = num * num;

    printf("O quadrado de %.2f e %.2f\n", num, quadrado);

    return 0;
}