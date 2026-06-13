#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[100];
};

int main() {
    struct Aluno alunos[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Aluno: %d\n", i + 1);

        printf("Nome: ");
        scanf(" %s", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Curso: ");
        scanf(" %s", alunos[i].curso);

        printf("\n");
    }

    printf("\n=== Dados dos Alunos ===\n");
    for(int i = 0; i < 5; i++) {
        printf("Aluno: %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }

    return 0;
}