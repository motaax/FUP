#include <stdio.h>

char converte_maiusculo(char c){

    if(c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}

int main(){
    char texto[100];
    int i;

    scanf("%[^\n]", texto);

    for(i = 0; texto[i] != '\0'; i++){
        texto[i] = converte_maiusculo(texto[i]);
    }

    printf("%s\n", texto);

    return 0;
}