#include <stdio.h>

void incrementa_valor(int x){
    x += 1; // Incrementa o valor de x (variavel local da funcao)
}

void incrementa_referencia(int *x){
    *x += 1; // Incrementa o valor apontado por x
}

int main(){
    int a = 10;

    incrementa_valor(a); 
    printf("Valor a: %d \n", a); // continua sendo 10

    incrementa_referencia(&a);
    printf("Valor a: %d \n", a); // agora é 11

    return 0;
}