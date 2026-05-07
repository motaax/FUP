#include <stdio.h>
#include <math.h>

int main() {
    float altura, baseMaior, baseMenor;
    scanf("%f %f %f", &altura, &baseMaior, &baseMenor);

    float volume = altura * (baseMaior + sqrt(baseMaior * baseMenor) + baseMenor) / 3.0;

    printf("%.2f \n", volume);

    return 0;
}