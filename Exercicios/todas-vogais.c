#include <stdio.h>
#include <string.h>

int main() {
    char texto[51];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int i, j;
    int encontrou[5] = {0, 0, 0, 0, 0};

    scanf(" %[^\n]", texto);

    for (i = 0; i < strlen(texto); i++) {
        for (j = 0; j < 5; j++) {
            if (texto[i] == vogais[j]) {
                encontrou[j] = 1;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        if (encontrou[i] == 0) {
            printf("nao\n");
            return 0;
        }
    }

    printf("sim\n");
    return 0;
}