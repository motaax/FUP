#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int calorias[n];
    int soma = 0;

    for(int i=0; i < n; i++) {
        scanf("%d", &calorias[i]);
        soma += calorias[i];
    }

    float media = (float) soma / n;
    printf("%.1f \n", media);

    return 0;
}