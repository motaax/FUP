#include <stdio.h>

int main() {
    int n1, n2;
    int i;
    int soma1 = 0, soma2 = 0;

    scanf("%d", &n1);
    int v1[n1];

    for(i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
        soma1 += v1[i];
    }

    scanf("%d", &n2);
    int v2[n2];

    for(i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
        soma2 += v2[i];
    }

    if(soma1 > soma2) {
        printf("Vetor 1 ganha\n");
    } else if(soma1 == soma2) {
        printf("Empate\n");
    } else {
        printf("Vetor 2 ganha\n");
    }

    return 0;
}