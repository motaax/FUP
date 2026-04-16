#include <stdio.h>

int main() {
    char letra;
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("Vogal \n");
    } else if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("Vogal \n");
    } else {
        printf("Consoante \n");
    }
    
    return 0; 
}