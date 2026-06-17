#include <stdio.h>
#include <string.h>

struct Aluno{
    int matricula;
    char nome[50];
    float ira;

};

int main() {
    struct Aluno carlos;

    carlos.matricula = 345;
    carlos.ira = 9.5;
    strcpy(carlos.nome, "Carlos Henrique");

    printf("nome: %s\n", carlos.nome);
    printf("matricula: %d\n", carlos.matricula);
    printf("ira: %.1f\n", carlos.ira);

    return 0;
}