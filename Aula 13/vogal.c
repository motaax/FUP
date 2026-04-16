#include <stdio.h>

int main() {
    char letra;
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("Vogal \n");
    } else {
        printf("Consoante \n");
    }
    

    return 0; 
}