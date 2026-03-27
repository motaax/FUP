#include <stdio.h>

int main() {
    int n, el, maior = -999999;
    printf("Digite a quantidade: \n");
    scanf("%d", &n);

    int i = 0;
    while(i < n) {
        printf("Digite o elemento: \n");
        scanf("%d", &el);

        if(el > maior) {
            maior = el;
        }

        i++;
    }

    printf("O maior elemento e: %d \n", maior);

    return 0;
}