#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'X';
    char d = 'x';

    if(isupper(c)) {
        printf("Maiusculo \n");
    }

    if(islower(d)) {
        printf("Minusculo \n");
    }

    return 0;
}