#include <stdio.h>
#include <string.h>

void inverte_string(char txt[]) {
    int i, tam;
    char auxi;

    tam = strlen(txt);
    for(i = 0; i < tam / 2; i++) {
        auxi = txt[i];
        txt[i] = txt[tam - 1 - i];
        txt[tam - 1 - i] = auxi;
    }

}

int main() {
    char palavra[] = "fup";
    
    inverte_string(palavra);
    printf("%s\n", palavra);

    return 0;
}