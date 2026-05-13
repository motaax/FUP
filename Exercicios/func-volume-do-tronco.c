#include <stdio.h>
#include <math.h>

float volume(float alt, float areaMaior, float areaMenor){
    float res = alt * (areaMaior + sqrt(areaMaior * areaMenor) + areaMenor) / 3.0;

    return res;
}

int main(){
    float altura, baseMaior, baseMenor;
    scanf("%f %f %f", &altura, &baseMaior, &baseMenor);

    printf("%.2f", volume(altura, baseMaior, baseMenor));

    return 0;
}