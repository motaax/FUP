#include <stdio.h>

struct Ponto {
    float x, y;
};

typedef struct Ponto Ponto;

int main(){
    Ponto p;

    p.x = 2;
    p.y = 3;
    printf("p = (%.1f, %.1f)\n", p.x, p.y);

    return 0;
}