#include <stdio.h>
 
int main() {
    int i = 5;
    char c = 'a';
    float f = 3.14159;

    printf("i: %d, endereco: %p \n", i, &i);
    printf("c: %c, endereco: %p \n", c, &c);
    printf("f: %f, endereco: %p \n", f, &f);

    return 0;
}