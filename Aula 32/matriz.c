#include <stdio.h>

int main() {
    float matriz[2][3];

    //l = linha
    for(int l = 0; l < 2; l++) {
        //c = coluna
        for(int c = 0; c < 3; c++) {
            scanf("%f", &matriz[l][c]);
        }
    }

    for(int l = 0; l < 2; l++) {
        for(int c = 0; c < 3; c++) {
            printf("%.2f \n", matriz[l][c]);
        }
    }

    return 0;
}