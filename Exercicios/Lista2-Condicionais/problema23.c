#include <stdio.h>

int main() {
    int ano;
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("E divisivel! \n");
    } else if (ano % 4 == 0 && ano % 100 != 1) {
        printf("E divisivel! \n");
    } else {
        printf("O numero nao e divisivel! \n");
    }

    return 0;
}