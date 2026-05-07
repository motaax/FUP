#include <stdio.h>
#include <math.h>

int main() {
    float cat1, cat2, hip;

    printf("Digite o valor do primeiro cateto: \n");  
    scanf("%f", &cat1);
    printf("Digite o valor do segundo cateto: \n");
    scanf("%f", &cat2);
    
    hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
    printf("A hipotenusa e: %.2f\n", hip); 

    return 0;
}