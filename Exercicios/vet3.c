#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];

    for(int i=0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("[ ");

    for(int i=0; i < n; i++) {
        printf("%d", vetor[i]);

        if(i < n - 1) {
            printf(" ");
        }
    }

    printf(" ]");

    return 0;
}