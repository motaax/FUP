#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101];
    int i, valido = 1;

    scanf("%[^\n]", str);

    if (!(isalpha(str[0]) || str[0] == '_')) {
        valido = 0;
    }

    for (i = 1; str[i] != '\0'; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            valido = 0;
            break;
        }
    }

    if (valido) {
        printf("Valido");
    } else {
        printf("Invalido");
    }

    return 0;
}