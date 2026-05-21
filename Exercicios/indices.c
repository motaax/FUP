#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vet[n];
    int idx[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
        idx[i] = i; // índice original
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;

                temp = idx[j];
                idx[j] = idx[j + 1];
                idx[j + 1] = temp;
            }
        }
    }

    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d", idx[i]);

        if (i < n - 1)
            printf(" ");
    }
    printf(" ]\n");

    return 0;
}