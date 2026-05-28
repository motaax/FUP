#include <stdio.h>

float H(int n) {
    float soma = 0.0;

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    return soma;
}

int main() {
    printf("H(1) = %.2f\n", H(1));
    printf("H(3) = %.2f\n", H(3));

    return 0;
}