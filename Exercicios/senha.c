#include <stdio.h>
#include <string.h>

int main() {
    char senha[100];
    int i;

    int temMaiuscula = 0;
    int temMinuscula = 0;
    int temNumero = 0;
    int temSimbolo = 0;

    scanf("%s", senha);

    int tamanho = strlen(senha);

    for(i = 0; i < tamanho; i++) {
        if(senha[i] >= 'A' && senha[i] <= 'Z') {
            temMaiuscula = 1;
        }
        else if(senha[i] >= 'a' && senha[i] <= 'z') {
            temMinuscula = 1;
        }
        else if(senha[i] >= '0' && senha[i] <= '9') {
            temNumero = 1;
        }
        else if(senha[i] == '!' || senha[i] == '@' || senha[i] == '#' || senha[i] == '$') {
            temSimbolo = 1;
        }
    }

    if(tamanho >= 6 && temMaiuscula && temMinuscula && temNumero && temSimbolo) {
        printf("Senha forte\n");
    } else {
        printf("Senha fraca\n");
    }

    return 0;
}