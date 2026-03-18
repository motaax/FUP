#include <stdio.h>

int main() {
    int idade;
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 70) {
        printf("Vota \n");
    } else {
        printf("Nao vota \n");
    }

    return 0;
}