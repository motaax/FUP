#include <stdio.h>
#include <ctype.h>

int vogal(char c){
    c = tolower(c);

    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char texto[101];
    int i;

    scanf("%[^\n]", texto);

    for(i = 0; texto[i + 2] != '\0'; i++){
        if(vogal(texto[i]) && vogal(texto[i + 1]) && vogal(texto[i + 2])) {
            printf("SIM\n");
            return 0;
        }
    }

    printf("NAO\n");

    return 0;
}