#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vet[n];

    int ord = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        if(vet[i] > vet[i + 1]) {
            ord = 0;
            printf("NAO");
            break; 
        }
    }

    if(ord == 1){
        printf("SIM");
    }

    return 0;
}