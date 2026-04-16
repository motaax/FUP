#include <stdio.h>

int main() {
    char texto[100];
    scanf("%s", texto); //Sem o & para ler uma string

    int i = 0;
    while(texto[i] != '\0') {
        printf("%c \n", texto[i]);
        i++;
    }

    return 0;
}