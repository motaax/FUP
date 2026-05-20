#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    if (&a > &b) {
        printf("Maior: %p\n", &a);
    } else {
        printf("Maior: %p\n", &b);
    }

    return 0;
}