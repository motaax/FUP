#include <stdio.h>

int main() {
    int v[100];
    int n, i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - 1; j++) {
            if(v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    printf("Vetor depois de ordenar: \n");

    for(i = 0; i < n; i ++) {
        printf("%d ", v[i]);
    } 

    return 0;
}