#include <stdio.h>

int main() {
    int series = 1, repeticao = 1;
    int s, r;

    for(s = 5; s >= series; s--) {
        printf("Serie %d \n", s);

        for(r = 10; r >= repeticao; r--) {
            printf("  Repeticao %d \n", r);
        }

        printf("  Descanso... \n");        
    }

    return 0;
}