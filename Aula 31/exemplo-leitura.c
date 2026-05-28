#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("leitura.txt", "r");
    
    int x, y;
    fscanf(arquivo, "%d", &x);
    fscanf(arquivo, "%d", &y);

    printf("%d %d", x, y);
    fclose(arquivo);

    return 0;
}