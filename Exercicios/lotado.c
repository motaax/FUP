#include <stdio.h>

void mov(int *passageiros, int mov) {
    *passageiros += mov;
}

int main() {
    int c, m;
    int passageiros = 0;

    scanf("%d", &c);

    while (scanf("%d", &m) == 1) {
        mov(&passageiros, m);

        if (passageiros == 0) {
            printf("vazio\n");
        }
        else if (passageiros >= 2 * c) {
            printf("hora de partir\n");
            break;
        }
        else if (passageiros >= c) {
            printf("lotado\n");
        }
        else {
            printf("ainda cabe\n");
        }
    }

    return 0;
}