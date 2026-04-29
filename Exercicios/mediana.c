#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    double v[n], temp;
    
    for(i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    double mediana;

    if(n % 2 == 1) {
        mediana = v[n / 2];
    } else {
        mediana = (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }

    printf("%.1lf\n", mediana + 1e-9);

    return 0;
}