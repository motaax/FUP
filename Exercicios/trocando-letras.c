#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    scanf("%s", str);
    scanf("%d %d", &i, &j);

    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;

    for (int k = 0; str[k] != '\0'; k++) {
        printf("%c", str[k]);
    }

    printf("\n");

    return 0;
}