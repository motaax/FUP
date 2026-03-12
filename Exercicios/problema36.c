#include <stdio.h>

int main() {
    float raio;
    float altura;
    float pi = 3.14159;

    scanf("%f %f", &raio, &altura);

    float volume = pi * (raio * raio) * altura;

    printf("O volume do cilindro e: %f \n", volume);

    return 0;
}