#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto1[100];
    char texto2[100];

    scanf("%s", texto1);
    scanf("%s", texto2);

    if(strlen(texto1) != strlen(texto2)) {
        printf("Diferentes\n");
        return 0;
    }

    for(int i = 0; texto1[i] != '\0'; i++) {
        texto1[i] = tolower(texto1[i]);
    }

    for(int i = 0; texto2[i] != '\0'; i++) {
        texto2[i] = tolower(texto2[i]);
    }

    if(strcmp(texto1, texto2) == 0) {
        printf("Iguais\n");
    } else {
        printf("Diferentes\n");
    }

    return 0;
}