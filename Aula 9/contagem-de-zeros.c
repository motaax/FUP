#include <stdio.h>

int main() {
    int n, el, contador = 0;
    printf("Digite a quantidade de elementos: \n");
    scanf("%d", &n);

    int i = 0;
    while(i < n) {
        printf("Digite o elemento: \n");
        scanf("%d", &el);

        if(el == 0) {
            contador++;
        }

        i++;
    }

    printf("A quantidade de zeros: %d \n", contador);

    return 0;
}