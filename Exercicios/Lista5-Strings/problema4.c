#include <stdio.h>

int main() {
    char texto[100];
    scanf("%s", texto);
    printf("%s \n", texto);
    
    int i = 0;
    while(texto[i] != '\0') {
        i++;
    }

    printf("%d", i);
    
    return 0;
}