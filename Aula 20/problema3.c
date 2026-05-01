#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, contA = 0, contB = 0;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a') {
            contA++;
        } else if (s[i] == 'b') {
            contB++;
        }
    }

    if (contA < contB) {
        printf("%d\n", contA);
    } else {
        printf("%d\n", contB);
    }

    return 0;
}