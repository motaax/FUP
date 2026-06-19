#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    double IRA;
    char curso[3];
} Aluno;

int main() {
    printf("%ld\n", sizeof(Aluno));

    Aluno *vetor = malloc(10 * sizeof(Aluno));
    printf("%d\n", vetor[0].matricula);

    return 0;
}