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
        int menor1 = vet[0];
        int menor2 = vet[1];
        int menor3 = vet[2];

        printf("%d %d %d\n", menor1, menor2, menor3);
    }

    return 0;
}