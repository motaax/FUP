#include <stdio.h>

int main() {
    char texto[100];
    scanf("%s", texto); //Sem o & para ler uma string

    if(texto[0] >= 'a' & texto[0] <= 'z') {
        texto[0] = texto[0] - 32;
    }

    printf("Bom dia %s! \n", texto);

    return 0;
}