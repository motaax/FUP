#include <stdio.h>

int main() {
    float vel, tempo, consumo;
    float tempo_horas, distancia, desempenho;

    scanf("%f", &vel);
    scanf("%f", &tempo);
    scanf("%f", &consumo);

    tempo_horas = tempo / 60.0;
    distancia = vel * tempo_horas;
    desempenho = distancia / consumo;

    printf("%.2f\n", desempenho);

    return 0;
}