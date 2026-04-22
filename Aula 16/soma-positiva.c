#include <stdio.h>

int main() {
    int valor;
    int soma = 0;

    while(1) {
        printf("Digite um numero: \n");
        scanf("%d", &valor);

        if(valor >= 0) {
            soma += valor;
        } else {
            break;
        }
    }

    printf("Soma: %d \n", soma);

    return 0;
}