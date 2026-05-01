#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    char ultima = palavra[tamanho - 1];

    if (ultima == 's' || ultima == 'S') {
        printf("plural\n");
    } else {
        printf("singular\n");
    }

    return 0;
}