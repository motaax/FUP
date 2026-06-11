#include <stdio.h>

int main() {
    char nomes[3][50];
    
    printf("Digite tres nomes: \n");
    for(int i = 0; i < 3; i++) {
        scanf(" %s", nomes[i]);
    }

    for(int i = 3; i >= 0; i--) {
        printf("%s \n", nomes[i]);
    }

    return 0;
}