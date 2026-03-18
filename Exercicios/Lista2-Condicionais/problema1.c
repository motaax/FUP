#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("Numero %d e maior \n", a);
    } else if ( a == b) {
        printf("Os numeros sao iguais \n");
    } else {
        printf("O numero %d e menor \n", a);
    }

    return 0;
}