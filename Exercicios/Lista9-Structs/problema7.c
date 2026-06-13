#include <stdio.h>
#include <math.h>

typedef struct {
    float r;
    float a;

} Polar;

typedef struct {
    float x;
    float y;

} Cartesiana;

int main() {
    Polar p;
    Cartesiana c;

    printf("Digite o raio: \n");
    scanf("%f", &p.r);

    printf("Digite o argumento em radianos: \n");
    scanf("%f", &p.a);

    c.x = p.r * cos(p.a);
    c.y = p.r * sin(p.a);

    printf("Coordenadas cartesianas: \n");
    printf("x = %.2f \n", c.x);
    printf("y = %.2f \n", c.y);

    return 0;
}