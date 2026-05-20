#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.5;
    char cara = 'A';

    int *pInteiro = &inteiro;
    float *pReal = &real;
    char *pChar = &cara;

    printf("Antes da modificacao:\n");
    printf("%d\n", inteiro);
    printf("%.2f\n", real);
    printf("%c\n", cara);

    *pInteiro = 11;
    *pReal = 5.6;
    *pChar = 'B';

    printf("Depois da modificacao:\n");
    printf("%d\n", inteiro);
    printf("%.2f\n", real);
    printf("%c\n", cara);

    return 0;
}