#include <stdio.h>

int main() {
    float m;

    printf("Digite uma velocidade(m/s) qualquer: \n");
    scanf("%f", &m);

    float k = m * 3.6;

    printf("A velocidade em (km/h) e: %f \n", k);

    return 0;
}