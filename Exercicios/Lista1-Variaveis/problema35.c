#include <stdio.h>
#include <math.h>

int main() {
    float a, b;

    printf("Digite dois numeros: \n");
    scanf("%f %f", &a, &b);

    float hip = sqrt((a * a) + (b * b));

    printf("A hipotenusa e: %.2f\n", hip);

    return 0;
}