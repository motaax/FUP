#include <stdio.h>

int main() {
    int n, i;
    int alturas[50];
    int iguais = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &alturas[i]);
    }

    for(i = 1; i < n; i++) {
        if(alturas[i] != alturas[0]) {
            iguais = 0;
            break;
        }
    }

    if(iguais) {
        printf("Todas iguais\n");
    } else {
        printf("Nem todas iguais\n");
    }

    return 0;
}