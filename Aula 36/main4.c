#include <stdio.h>

typedef struct{
    float x, y;
} Ponto;

int main(){
    Ponto p = {2, 3};

    printf("p = (%.1f, %.1f)\n", p.x, p.y);

    return 0;
}