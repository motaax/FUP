#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char campo[50][51];

    for (int i = 0; i < n; i++) {
        scanf("%s", campo[i]);
    }

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (campo[i][j] == '*') {
                printf("*");
            } else {
                int minas = 0;

                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 && ni < n && nj >= 0 && nj < m &&
                        campo[ni][nj] == '*') {
                        minas++;
                    }
                }

                if (minas == 0)
                    printf("-");
                else
                    printf("%d", minas);
            }
        }
        printf("\n");
    }

    return 0;
}