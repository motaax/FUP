#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int contA[10] = {0};
    int contB[10] = {0};

    if (a == 0) {
        contA[0]++;
    }

    while (a > 0) {
        contA[a % 10]++;
        a /= 10;
    }

    if (b == 0) {
        contB[0]++;
    }
    
    while (b > 0) {
        contB[b % 10]++;
        b /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (contA[i] != contB[i]) {
            printf("False\n");
            return 0;
        }
    }

    printf("True\n");

    return 0;
}