#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    /*
    if(x > 0) {
        printf("Positivo");
    } else {
        if(x == 0) {
            printf("Zero");
        } else {
            printf("Negativo");
        }
    }
    */

    if(x > 0) {
        printf("Positivo");
    } else if(x == 0) {
        printf("Zero");
    } else {
        printf("Negativo");
    }

    return 0;
}