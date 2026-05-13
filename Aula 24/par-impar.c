#include <stdio.h>

int par(int x) {
    if(x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x;
    scanf("%d", &x);

    if(par(x)) {
        printf("x e par \n");
    } else {
        printf("x e impar \n");
    }

    return 0;
}