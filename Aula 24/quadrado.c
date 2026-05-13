#include <stdio.h>

int quadrado(int x) {
    return x * x;
}

int main() {
    int n1;
    scanf("%d", &n1);

    int n2 = quadrado(n1);
    printf("O seu quadrado vale %d \n", n2);

    return 0;
}