#include <stdio.h>

typedef struct {
    char nome[100];
    float n1, n2, n3, media;
} Aluno;

int main() {
    int n, i, j;

    scanf("%d", &n);

    Aluno aluno[n], aux;

    for (i = 0; i < n; i++) {
        scanf(" %[^\n]", aluno[i].nome);

        scanf("%f %f %f",
              &aluno[i].n1,
              &aluno[i].n2,
              &aluno[i].n3);

        aluno[i].media =
            (aluno[i].n1 +
             aluno[i].n2 +
             aluno[i].n3) / 3.0;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (aluno[j].media > aluno[i].media) {
                aux = aluno[i];
                aluno[i] = aluno[j];
                aluno[j] = aux;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d: %s\n", i, aluno[i].nome);
        printf("   Media: %.2f\n", aluno[i].media);
        printf("   N1: %.2f, N2: %.2f, N3: %.2f\n",
               aluno[i].n1,
               aluno[i].n2,
               aluno[i].n3);
    }

    return 0;
}