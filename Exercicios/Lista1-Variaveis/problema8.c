#include <stdio.h>

int main() {
    float kelvin;

    printf("Digite a temperatura em Kelvin: \n");
    scanf("%f", &kelvin);

    float celsius = kelvin - 273.15;

    printf("A temperatura em Celsius e: %.2f \n", celsius);

    return 0;
}