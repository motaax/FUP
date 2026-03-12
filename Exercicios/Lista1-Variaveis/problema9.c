#include <stdio.h>

int main() {
    float celsius;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &celsius);

    float kelvin = celsius + 273.15;

    printf("A temperatura em Kelvin e: %.2f \n", kelvin);

    return 0;
}