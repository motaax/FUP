#include <stdio.h>
#include <string.h>
#include <ctype.h>

void identificar(char *palavra) {
    int tem_letra = 0;
    int tem_ponto = 0;
    int i = 0;

    while (palavra[i] != '\0') {
        if (isalpha(palavra[i])) {
            tem_letra = 1;
            break;
        }

        if (palavra[i] == '.')
            tem_ponto = 1;

        i++;
    }

    if (tem_letra)
        printf("str");
    else if (tem_ponto)
        printf("float");
    else
        printf("int");
}

int main() {
    char frase[101];
    char *p;

    fgets(frase, 101, stdin);

    frase[strcspn(frase, "\n")] = '\0';

    p = strtok(frase, " ");

    while (p != NULL) {
        identificar(p);

        p = strtok(NULL, " ");
        if (p != NULL)
            printf(" ");
    }

    printf("\n");

    return 0;
}