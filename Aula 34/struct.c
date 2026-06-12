#include <stdio.h>

struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1;
    p1.idade = 32;
    p1.altura = 1.76;

    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}