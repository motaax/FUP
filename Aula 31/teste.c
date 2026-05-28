#include <stdio.h>

int main() {
    FILE *arquivo = fopen("teste.txt", "w");

    fprintf(arquivo, "Felipe Mota Mendes Oliveira");
    fclose(arquivo);

    return 0;
}