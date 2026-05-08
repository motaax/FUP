#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char nomes[100][100];
    char aux[100];

    for(int i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {

            if(strcmp(nomes[j], nomes[j + 1]) > 0) {

                strcpy(aux, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], aux);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}