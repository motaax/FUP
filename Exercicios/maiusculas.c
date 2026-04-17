#include <stdio.h>
#include <string.h>

int main() {
    char palavra[51];
    int i, cont = 0;

    scanf("%s", palavra);

    for(i = 0; palavra[i] != '\0'; i++) {
        if(palavra[i] >= 'A' && palavra[i] <= 'Z') {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}