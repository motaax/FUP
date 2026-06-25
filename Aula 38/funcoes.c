#include <stdio.h>

int g(int n) {
    return n + 1;
}

int f(int n) {
    return 2 * g(n);
}

int main() {
    int res = f(3);
    printf("Resultado: %d\n", res);

    return 0;
}