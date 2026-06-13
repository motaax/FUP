#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;

} Vetor;

int main() {
    Vetor v1, v2, v3, soma;

    printf("Digite as coordenadas do primeiro vetor (x y z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Digite as coordenadas do segundo vetor (x y z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    soma.x = v1.x + v2.x;
    soma.y = v1.y + v2.y;
    soma.z = v1.z + v2.z;

    printf("\nVetor soma = (%.2f, %.2f, %.2f)\n", soma.x, soma.y, soma.z);

    return 0;
}