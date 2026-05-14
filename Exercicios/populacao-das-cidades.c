#include <stdio.h>

int main() {
    int abi, bino;
    int anos = 0;

    scanf("%d", &abi);
    scanf("%d", &bino);

    while (bino <= abi) {
        abi = abi * 2;
        bino = bino * 3;
        anos++;
    }

    printf("%d\n", anos);

    return 0;
}