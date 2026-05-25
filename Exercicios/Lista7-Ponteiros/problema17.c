#include <stdio.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int) num;
    *frac = num - *inteiro;
}

int main() {
    float num, parteFrac;
    int parteInt;
    scanf("%f", &num);

    frac(num, &parteInt, &parteFrac);

    printf("Parte inteira: %d\n", parteInt);
    printf("Parte fracionaria: %.2f\n", parteFrac);

    return 0;
}