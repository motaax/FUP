#include <stdio.h>
#include <string.h>

int main() {
    char texto1[100];
    scanf("%s", texto1);
    char texto2[100];
    scanf("%s", texto2);

    if(strcmp(texto1, texto2) == 0) {
        printf("Iguais \n");
    } else {
        printf("Diferentes \n");
    }

    return 0;
}