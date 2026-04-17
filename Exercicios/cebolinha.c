#include <stdio.h>

int main() {
    char texto[50];
    scanf("%s", texto);
    
    for(int i = 0; i <= texto[i]; i++) {
        if(texto[i] == 'r') {
            printf("%c", texto[i] = 'l');
            continue;
        } else if(texto[i] == 'R') {
            printf("%c", texto[i] = 'L');
            continue;
        }

        printf("%c", texto[i]);
        
    }

    return 0;
}