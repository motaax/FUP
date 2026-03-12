#include <stdio.h>

int main() {
    float premio = 780000;
    float g1 = premio * 0.46;
    float g2 = premio * 0.32;
    float g3 = premio - (g1 + g2);

    printf("O primeiro ganhador vai receber: %.2f \n", g1);
    printf("O segundo ganhador vai receber: %.2f \n", g2);
    printf("O terceiro ganhador vai receber: %.2f \n", g3);

    return 0;
}