#include <stdio.h>

#define MAX 10

typedef struct {
    int matricula;
    char nome[50];
    int codigo;
    float nota1, nota2, media;
} Aluno;

int main() {
    Aluno alunos[MAX];
    int n;
    scanf("%d", &n);

    if(n > MAX) {
        n = MAX;
    }

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Codigo da Disciplina: ");
        scanf("%d", &alunos[i].codigo);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;
    }

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Codigo da Disciplina: %d\n", alunos[i].codigo);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Media Final: %.2f\n", alunos[i].media);
    }

    return 0;
}