#include <stdio.h>

int main() {
    int n1,n2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int media = (n1 + n2) / 2;
    printf("A media e : %d \n", media);

    return 0;
}