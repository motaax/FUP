#include <stdio.h>

int main() {
    int n, el, soma = 0;

    printf("Digite a quantidade de elementos: \n");
    scanf("%d", &n);

    int i = 0;
    while(i < n) {
        printf("Digite o elemento: \n");
        scanf("%d", &el);

        soma = soma + el;

        i++;
    }

    printf("Soma: %d", soma);

    return 0;
}