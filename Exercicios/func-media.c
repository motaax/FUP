#include <stdio.h>

float media(float a1, float a2){
    return (a1 + a2) / 2.0;
}

int main(){
    float a, b;
    scanf("%f %f", &a, &b);

    float m = media(a,b);
    printf("%.2f\n", m);

    return 0;
}