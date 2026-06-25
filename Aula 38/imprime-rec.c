#include <stdio.h>

void imprime(int x) {
    if(x == 0) {
        printf("Zero!\n");
    } else {
        printf("X: %d\n", x);
        imprime(x - 1);
    }
}

int main() {
    imprime(3);

    return 0;
}