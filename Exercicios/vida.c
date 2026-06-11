#include <stdio.h>

int main() {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    char mat[linhas][colunas + 1];
    char prox[linhas][colunas + 1];

    for (int i = 0; i < linhas; i++) {
        scanf("%s", mat[i]);
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {

            int vivos = 0;

            //Conta os vizinhos
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {

                    if (di == 0 && dj == 0)
                        continue;

                    int ni = i + di;
                    int nj = j + dj;

                    if (ni >= 0 && ni < linhas &&
                        nj >= 0 && nj < colunas &&
                        mat[ni][nj] == '#') {
                        vivos++;
                    }
                }
            }

            //Regras
            if (mat[i][j] == '#') {
                if (vivos < 2 || vivos > 3)
                    prox[i][j] = '.';
                else
                    prox[i][j] = '#';
            } else {
                if (vivos == 3)
                    prox[i][j] = '#';
                else
                    prox[i][j] = '.';
            }
        }

        prox[i][colunas] = '\0';
    }

    for (int i = 0; i < linhas; i++) {
        printf("%s\n", prox[i]);
    }

    return 0;
}