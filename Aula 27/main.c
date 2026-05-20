#include <stdio.h>
 
int main() {
    int x = 10;
    int *ptr;
    ptr = &x; 

    printf("Valor de x antes: %d \n", x);
    printf("Endereco: %p \n", ptr);

    *ptr = 15;
    printf("Valor de x depois: %d \n", x);

    return 0;
}