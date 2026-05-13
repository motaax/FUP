#include <stdio.h>

int eh_vogal(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    char caractere;
    scanf("%c ", &caractere);

    if(eh_vogal(caractere)){
        printf("o caractere eh vogal\n");
    } else {
        printf("o caractere nao eh vogal\n");
    }

    return 0;
}