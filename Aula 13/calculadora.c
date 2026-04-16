#include <stdio.h>

int main() {
    int valores[2]; 
    char operador;      

    scanf("%d", &valores[0]);
    scanf(" %c", &operador);
    scanf("%d", &valores[1]);

    if (operador == '+') {
        printf("%d\n", valores[0] + valores[1]);
    } 
    else if (operador == '-') {
        printf("%d\n", valores[0] - valores[1]);
    } 
    else if (operador == '*') {
        printf("%d\n", valores[0] * valores[1]);
    } 
    else if (operador == '/') {
        if (valores[1] == 0) {
            printf("ERRO\n");
        } else {
            printf("%d\n", valores[0] / valores[1]); 
        }
    }

    return 0;
}