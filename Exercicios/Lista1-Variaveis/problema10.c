#include <stdio.h>

int main() {
    float k;

    printf("Digite uma velocidade(km/h) qualquer: \n");
    scanf("%f", &k);

    float m = k / 3.6;

    printf("A velocidade em (m/s) e: %f \n", m);

    return 0;
}