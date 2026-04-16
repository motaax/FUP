#include <stdio.h>

int main() {
    char letra;
    scanf("%c", &letra);
    
    if(letra >= 65 && letra <= 90){
        printf("Maiusculo \n");
    } else {
        printf("Minusculo \n");
    }

    return 0; 
}