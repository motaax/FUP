#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num == 10) {
        printf("Numero igual a 10 \n");
    } else {
        printf("Numero diferente de 10 \n");
    }

    printf("Fim do programa! \n");

    return 0;
}