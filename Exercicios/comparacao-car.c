#include <stdio.h>

int main() {
    char letra1, letra2;

    scanf(" %c", &letra1);
    scanf(" %c", &letra2);

    if (letra1 < letra2) {
        printf("%c \n", letra1);
    } else if (letra2 < letra1) {
        printf("%c \n", letra2);
    } else {
        printf("As duas letras são iguais: %c \n", letra1);
    }

    return 0;
}