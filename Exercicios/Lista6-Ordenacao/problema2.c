#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int vet[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - 1; j++) {
            if(vet[j] > vet[j + 1]) {
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < n; i ++) {
        printf("%d ", vet[i]);
    } 

    return 0;
}