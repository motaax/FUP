#include <stdio.h>

int main() {
    int N, i, primo = 1;

    scanf("%d", &N);

    if (N <= 1) {
        primo = 0;
    } else {
        for (i = 2; i < N; i++) {
            if (N % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    printf("%d\n", primo);

    return 0;
}