#include <stdio.h>

int main() {
    float raio = 2.5;
    float altura = 3.1;
    float pi = 3.1415926;
    float volume = pi * (raio * raio) * altura;

    printf("O volume é: %.7f", volume);

    return 0;
}