#include <stdio.h>
#include <string.h>

int main() {
    char numero[51];

    scanf("%s", numero);

    int tamanho = strlen(numero);
    char ultimo = numero[tamanho - 1];

    if(ultimo == '0' || ultimo == '2' || ultimo == '4' || ultimo == '6' || ultimo == '8') {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}