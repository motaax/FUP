#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("escrita.txt", "w");
    int x = 100;

    fprintf(arquivo, "Ola mundo! %d", x);
    fclose(arquivo);

    return 0;
}