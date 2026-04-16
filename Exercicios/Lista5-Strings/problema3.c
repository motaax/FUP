#include <stdio.h>

int main() {
    char texto[100];
    scanf("%s", texto);
    
    int i = 0;
    while(texto[i] != '\0') {
        printf("%c", texto[i]);
        i++;
    }

    scanf("%[^\n]", texto);

    i = 0;
    while(texto[i] != '\0') {
        printf("%c", texto[i]);
        i++;
    }
    
    return 0;
}