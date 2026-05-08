#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[100];
    scanf("%s", texto);

    for(int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper(texto[i]);
    }

    printf("%s \n", texto);

    return 0;
}