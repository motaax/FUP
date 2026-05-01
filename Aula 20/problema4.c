#include <stdio.h>

int main() {
    int N, X;
    int i, j;
    
    scanf("%d %d", &N, &X);

    int v[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (v[i] + v[j] == X) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1\n");

    return 0;
}