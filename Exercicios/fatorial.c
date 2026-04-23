#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;

    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido!\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("%lld\n", fatorial);
    }

    return 0;
}