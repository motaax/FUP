#include <stdio.h>
#include <string.h>

int main() {
    char texto1[100] = "mochila";
    char texto2[100] = "teclado";

    strcpy(texto1, texto2); //copia tudo do texto2 para o texto1

    printf("Texto 1: %s\n", texto1);
    printf("Texto 2: %s\n", texto2);

    return 0;
}