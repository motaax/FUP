#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    float altura;
    float pi = 3.14159;

    scanf("%f %f", &raio, &altura);

    float volume = pi * pow(raio, 2) * altura;

    printf("O volume e: %.2f \n", volume);

    return 0;
}