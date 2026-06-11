#include <stdio.h>

int main() {
    int m[3][3];
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int soma = m[0][0] + m[0][1] + m[0][2];

    for (i = 0; i < 3; i++) {
        int somaLinha = 0;
        for (j = 0; j < 3; j++) {
            somaLinha += m[i][j];
        }
        if (somaLinha != soma) {
            printf("nao\n");
            return 0;
        }
    }

    for (j = 0; j < 3; j++) {
        int somaColuna = 0;
        for (i = 0; i < 3; i++) {
            somaColuna += m[i][j];
        }
        if (somaColuna != soma) {
            printf("nao\n");
            return 0;
        }
    }

    int diagPrincipal = 0;
    for (i = 0; i < 3; i++) {
        diagPrincipal += m[i][i];
    }

    if (diagPrincipal != soma) {
        printf("nao\n");
        return 0;
    }

    int diagSecundaria = 0;
    for (i = 0; i < 3; i++) {
        diagSecundaria += m[i][2 - i];
    }

    if (diagSecundaria != soma) {
        printf("nao\n");
        return 0;
    }

    printf("sim\n");

    return 0;
}