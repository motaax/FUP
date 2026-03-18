#include <stdio.h>

int main() {
    int x;
    printf("Digite um numero: \n");
    scanf("%d", &x);

    if (x > 0) {
        printf("Positivo \n");
    } else if (x == 0) {
        printf("Zero \n");
    } else {
        printf("Negativo \n");
    }

    return 0;
}