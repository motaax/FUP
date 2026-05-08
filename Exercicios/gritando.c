#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[101];

    scanf("%100[^\n]", texto);

    int tam = strlen(texto);

    for (int i = 0; texto[i] != '\0'; i++) {

        if (islower(texto[i])) {
            printf("%c", toupper(texto[i]));
        }
        else if (isupper(texto[i])) {
            printf("%c", tolower(texto[i]));
        }
        else {
            printf("%c", texto[i]);
        }
    }

    printf("\n");

    return 0;
}