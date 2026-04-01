#include <stdio.h>

int main() {
    int n, passos = 0;
    scanf("%d", &n);

    printf("%d \n", n);

    while(n != 1) {
        if(n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }

        printf("%d \n", n);
        passos++;
    }

    printf("Passos: %d \n", passos);

    return 0;
}