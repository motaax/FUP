#include <stdio.h>

typedef struct{
    float x, y;
    int *ptr;
} Ponto;

int main(){
    int x = 1;
    Ponto p1 = {2, 3, &x};
    Ponto p2;
    p2 = p1; //A linguagem C permite atribuições entre structs
    *p1.ptr = 3;
    *p2.ptr = 5;

    printf("p = (%.1f, %.1f)\n", p1.x, p1.y);
    printf("p = (%.1f, %.1f)\n", p2.x, p2.y);

    return 0;
}