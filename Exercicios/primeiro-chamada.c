#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char nome[100];
    char menor[100];

    scanf("%s", menor);

    for(int i = 1; i < n; i++) {
        scanf("%s", nome);

        if(strcmp(nome, menor) < 0) {
            strcpy(menor, nome);
        }
    }

    printf("%s\n", menor);

    return 0;
}