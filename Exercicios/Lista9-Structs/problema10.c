#include <stdio.h>
#include <string.h>

#define N 5

typedef struct {
    char nome[50];
    char endereco[100];
    char telefone[20];
} Pessoa;

int main() {
    Pessoa pessoas[N], aux;

    for (int i = 0; i < N; i++) {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Endereco: ");
        scanf(" %[^\n]", pessoas[i].endereco);

        printf("Telefone: ");
        scanf(" %s", pessoas[i].telefone);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }

    printf("\n--- Pessoas em ordem alfabetica ---\n");

    for (int i = 0; i < N; i++) {
        printf("\nNome: %s\n", pessoas[i].nome);
        printf("Endereco: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
    }

    return 0;
}