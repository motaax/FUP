#include <stdio.h>

struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1;
    scanf("%d", &p1.idade);
    scanf("%f", &p1.altura);

    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}