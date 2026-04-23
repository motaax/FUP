#include <stdio.h>

int main() {
    /*FOR SEM ANINHAMENTO
        int i;
        for(i = 0; i < 10; i++) {
            printf("%d ", i);
        }

        printf("\n");

        for(i = 0; i < 10; i++) {
            printf("%d ", i);
        }

        printf("\n");

        for(i = 0; i < 10; i++) {
            printf("%d ", i);
        }

        printf("\n");
    */

    //FOR COM ANINHAMENTO(MATRIZ)
    int series = 5, repeticao = 10;
    int s, r;

    for(s = 1; s <= series; s++) {
        printf("Serie %d \n", s);

        for(r = 1; r <= repeticao; r++) {
            printf("  Repeticao %d \n", r);
        }

        printf("  Descanso... \n");
    }

    return 0;
}