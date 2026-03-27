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

    printf("A soma e: %d \n", soma);

    float media = (float) soma / n;

    printf("A media e: %.2f \n", media);

    return 0;
}