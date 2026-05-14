#include <stdio.h>
#define pi 3.1415926

float volume_cilindro(float raio, float altura){
    float res = pi * (raio * raio) * altura;

    return res;
}

int main(){
    float r, h;
    scanf("%f %f", &r, &h);
    printf("Volume do cilindro: %.2f\n", volume_cilindro(r, h));

    return 0;
}