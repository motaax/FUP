#include <stdio.h>

int main() {
    float matriz[2][3];

    //l = linha
    for(int l = 0; l < 2; l++) {
        //c = coluna
        for(int c = 0; c < 3; c++) {
            printf("Digite o valor da linha %d coluna %d\n", l, c);
            scanf("%f", &matriz[l][c]);
        }
    }

    //l = linha
    for(int l = 0; l < 2; l++) {
        //c = coluna
        for(int c = 0; c < 3; c++) {
            printf("%.1f ", matriz[l][c]);
        }

        printf("\n");
    }

    return 0;
}