#include <stdio.h>

int tamanho_string(char txt[]) {
    int tam = 0;
    for(int i = 0; txt[i] != '\0'; i++) {
        tam++;
    }

    return tam;
}

int main() {
    char texto[100] = "fup";
    printf("%d \n", tamanho_string(texto));
    
    return 0;
}