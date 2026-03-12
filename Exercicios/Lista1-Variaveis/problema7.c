#include <stdio.h>

int main() {
    float fahrenheit;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("Valor em Celsius e: %.2f\n", celsius);

    return 0;
}