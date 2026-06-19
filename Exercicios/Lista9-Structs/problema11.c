#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[10];
    struct Aluno aprovados[10];
    struct Aluno reprovados[10];

    int qtdAprovados = 0, qtdReprovados = 0;

    for (int i = 0; i < 10; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media Final: ");
        scanf("%f", &alunos[i].mediaFinal);

        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[qtdAprovados] = alunos[i];
            qtdAprovados++;
        } else {
            reprovados[qtdReprovados] = alunos[i];
            qtdReprovados++;
        }

        printf("\n");
    }

    printf("Aprovados\n");
    for (int i = 0; i < qtdAprovados; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media Final: %.2f\n", aprovados[i].mediaFinal);
        printf("\n");
    }

    printf("Reprovados\n");
    for (int i = 0; i < qtdReprovados; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media Final: %.2f\n", reprovados[i].mediaFinal);
        printf("\n");
    }

    return 0;
}