#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
} Aluno;

int main() {
    Aluno alunos[5];
    int i;

    int maiorNota1 = 0;
    int maiorMedia = 0;
    int menorMedia = 0;

    float media, mediaMaior, mediaMenor;

    for (i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
    }

    mediaMaior = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    mediaMenor = mediaMaior;

    for (i = 1; i < 5; i++) {

        if (alunos[i].nota1 > alunos[maiorNota1].nota1) {
            maiorNota1 = i;
        }

        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (media > mediaMaior) {
            mediaMaior = media;
            maiorMedia = i;
        }

        if (media < mediaMenor) {
            mediaMenor = media;
            menorMedia = i;
        }
    }

    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s\n", alunos[maiorNota1].nome);
    printf("Nota: %.2f\n", alunos[maiorNota1].nota1);

    printf("\nAluno com maior media geral:\n");
    printf("Nome: %s\n", alunos[maiorMedia].nome);
    printf("Media: %.2f\n", mediaMaior);

    printf("\nAluno com menor media geral:\n");
    printf("Nome: %s\n", alunos[menorMedia].nome);
    printf("Media: %.2f\n", mediaMenor);

    printf("\nSituacao dos alunos:\n");

    for (i = 0; i < 5; i++) {
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        printf("%s - Media: %.2f - ", alunos[i].nome, media);

        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}