#include <stdio.h>

int fatorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i;
    }

    return f;
}

int main() {
    printf("%d", fatorial(5));

    return 0;
}