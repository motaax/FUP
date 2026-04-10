#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    int robos[50];
    int contador = 0;
    
    for(int i=0; i < n; i++) {
        scanf("%d", &robos[i]);

        if(robos[i] == x) {
            contador++;
        }
    }

    printf("%d \n", contador);

    return 0;
}