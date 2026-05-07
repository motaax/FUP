#include <stdio.h>
#include <math.h>

int main() {
    float num;
    scanf("%f", &num);

    printf("Valor: %.3f \n", num);

    float raiz = sqrt(num);
    printf("Raiz: %.3f \n", raiz);

    float quadrado = pow(num, 2);
    printf("Quadrado: %.3f \n", quadrado);

    float cubo = pow(num, 3);
    printf("Cubo: %.3f \n", cubo);

    return 0;
}