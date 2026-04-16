#include <stdio.h>

int main() {
    char texto[100];
    scanf("%s", texto);
    printf("%s \n", texto);

    char texto2[100];
    scanf("%s", texto2);
    printf("%s \n", texto2);
    
    int i = 0;
    int j = 0;
    while(texto[i] != '\0' && texto[j] != '\0') {
        i++;
        j++;

        if(texto[i] == texto2[j]) {
            printf("Os tamanhos sao iguais! \n");
            break;
        } else {
            printf("Os tamanhos nao sao iguais! \n");
            break;
        }
    }

    return 0;
}