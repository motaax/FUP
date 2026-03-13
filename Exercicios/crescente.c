#include <stdio.h>

int main() {
    int x1, x2, x3;

    scanf("%d %d %d", &x1, &x2, &x3);

    printf("%d\n", (x2 > x1) && (x3 > x2));

    return 0;
}
