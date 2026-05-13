#include <stdio.h>
#include <math.h>

double raiz_quadrada(double s){
    double x = s / 2;
    int erro = 1;
    double p = 0.0001;

    if(erro > p) {
        x = 0.5 * (x + s / x);
        erro = fabs(s - x * x);
    }

    return x;
}

int main(){
    double a;
    scanf("%lf", &a);

    double r = raiz_quadrada(a);
    printf("%.2lf", r);

    return 0;
}