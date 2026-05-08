#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    scanf("%[^\n]", texto);

    int tam = strlen(texto);
    printf("Sua string tem %d caracteres \n", tam);

    
    return 0;
}