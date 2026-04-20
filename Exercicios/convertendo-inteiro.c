#include <stdio.h>
#include <stdlib.h>

int main() {
    char d1, d2, d3;
    char numero_str[4];
    int numero;

    scanf("%c %c %c", &d1, &d2, &d3);

    numero_str[0] = d1;
    numero_str[1] = d2;
    numero_str[2] = d3;
    numero_str[3] = '\0';

    numero = atoi(numero_str);

    printf("%d\n", numero * 2);

    return 0;
}