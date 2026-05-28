#include <stdio.h>

void calc_esf(float R, float *area, float *volume) {
    float pi = 3.14159;

    *area = 4 * pi * R * R;
    *volume = (4.0 / 3.0) * pi * R * R * R;
}

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esf(raio, &area, &volume);

    printf("Area da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}