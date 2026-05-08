#include <stdio.h>
#include <string.h>

int main() {
    char texto1[100] = "mochila";
    char texto2[100] = "teclado";

    if(strcmp(texto1, texto2) == 0) {
        printf("Sao iguais \n");
    } else {
        printf("Sao diferentes \n");
    }

    return 0;
}