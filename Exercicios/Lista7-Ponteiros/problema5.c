#include <stdio.h>

void ordena(int *a, int *b) {
    int temp;
    if(*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    ordena(&x, &y);
    printf("Maior: %d\n", x);
    printf("Menor: %d\n", y);

    return 0;
}