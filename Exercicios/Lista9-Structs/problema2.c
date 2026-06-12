#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct Pessoa p1;
    scanf("%s", p1.nome);
    scanf("%d", &p1.idade);
    scanf("%s", p1.endereco);

    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Endereco: %s\n", p1.endereco);

    return 0;
}