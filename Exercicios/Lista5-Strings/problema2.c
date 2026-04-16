#include <stdio.h>

int main() {
    char texto[100];
    texto[0] = 'C';
    texto[1] = 'a';
    texto[2] = 's';
    texto[3] = 'a';
    texto[4] = '\0';

    printf("%s \n", texto);

    texto[2] = 'd';
    printf("%s \n", texto);

    printf("%s %s \n", texto, texto);

    texto[4] = '!';
    texto[5] = '\0';

    printf("%s %s \n", texto, texto);

    texto[4] = '\n';

    printf("%s %s \n", texto, texto);

    return 0;
}