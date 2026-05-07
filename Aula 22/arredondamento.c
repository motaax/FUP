#include <stdio.h>
#include <math.h>

int main() {
    float x = 1.25;

    printf("O valor de x: %f \n", x);
    printf("Piso de x: %f \n", floor(x));
    printf("Teto de x: %f \n", ceil(x));
    printf("Arredonda o x: %f \n", round(x));

    return 0;
}