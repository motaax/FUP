#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    double IRA;
    char curso[3];
};

int main() {
    printf("%ld", sizeof(struct Aluno));

    return 0;
}