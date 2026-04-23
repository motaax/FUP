#include <stdio.h>

int main() {
    int t, x;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &x);

        long long fatorial = 1;

        for (int j = 1; j <= x; j++) {
            fatorial *= j;
        }

        printf("%lld\n", fatorial);
    }

    return 0;
}