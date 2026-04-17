#include <stdio.h>

int main() {
    char a, b, c;
    int contador = 0;

    scanf(" %c %c %c", &a, &b, &c);

    if(a >= '0' && a <= '9') {
        contador++;
    }
    if(b >= '0' && b <= '9') {
        contador++;
    }
    if(c >= '0' && c <= '9') {
        contador++;
    }

    printf("%d\n", contador);

    return 0;
}