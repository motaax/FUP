#include <stdio.h>

int main() {
    char letra1, letra2, letra3;
    scanf("%c %c %c", &letra1, &letra2, &letra3);

    int contador = 0;

    if(letra1 == '@') {
        contador++;
    }

    if(letra2 == '@') {
        contador++;
    } 
    
    if(letra3 == '@') {
        contador++;
    }

    printf("%d \n", contador);
    
    return 0; 
}