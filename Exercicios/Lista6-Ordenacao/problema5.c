#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int vet[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(vet[j] > vet[j + 1]) {
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");

    if(n >= 3) {
        int maior1 = vet[n - 1];
        int maior2 = vet[n - 2];
        int maior3 = vet[n - 3];

        printf("%d %d %d\n", maior1, maior2, maior3);
    }

    return 0;
}