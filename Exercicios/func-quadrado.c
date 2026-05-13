#include <stdio.h>

float quadrado(float x) {
    return x * x;
}

int main(){
    float x;
    scanf("%f", &x);

    printf("%.2f \n", quadrado(x));
    
    return 0;
}