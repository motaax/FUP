#include <stdio.h>

int ehSimetrica(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (mat[i][j] != mat[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int mat[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (ehSimetrica(mat)) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}