#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[101], palavra2[101];

    scanf("%100s", palavra1);
    scanf("%100s", palavra2);

    if (strcmp(palavra1, palavra2) <= 0)
        printf("%s\n", palavra1);
    else
        printf("%s\n", palavra2);

    return 0;
}