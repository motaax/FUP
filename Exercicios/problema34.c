#include <stdio.h>

int main() {
    int raio;
    float pi = 3.141592;

    printf("Digite o valor do raio: \n");
    scanf("%d", &raio);

    float area = pi * (raio * raio);

    printf("A area do circulo e: %f \n", area);

    return 0;
}