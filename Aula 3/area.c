#include <stdio.h>

int main() {

    float altura;
    float largura;

    scanf("%f", &altura);
    scanf("%f", &largura); 

    float area = altura * largura;

    printf("Area: %.2f", area);

    return 0;
}