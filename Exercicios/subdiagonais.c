#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int somaPrincipal = 0, somaSecundaria = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][4 - i];
    }

    printf("%d\n", somaPrincipal - somaSecundaria);

    return 0;
}