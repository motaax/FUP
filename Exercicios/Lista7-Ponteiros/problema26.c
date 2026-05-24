#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta;

    if (A == 0)
        return -1; 

    delta = B * B - 4 * A * C;

    if (delta < 0) {
        return 0; 
    }
    else if (delta == 0) {
        *X1 = -B / (2 * A);
        *X2 = *X1;
        return 1; 
    }
    else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2; 
    }
}

int main() {
    float A, B, C;
    float x1, x2;
    int qtd;

    printf("Digite os coeficientes A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    qtd = raizes(A, B, C, &x1, &x2);

    if (qtd == -1) {
        printf("A deve ser diferente de zero.\n");
    }
    else if (qtd == 0) {
        printf("Nao existem raizes reais.\n");
    }
    else if (qtd == 1) {
        printf("Existe uma raiz real: %.2f\n", x1);
    }
    else {
        printf("Existem duas raizes reais:\n");
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}