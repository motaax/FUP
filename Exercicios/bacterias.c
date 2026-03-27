#include <stdio.h>

int main() {
    int bacterias, dias;
    int d = 1;

    scanf("%d", &bacterias);
    scanf("%d", &dias);

    while(d <= dias) {
        printf("Dia %d: %d bacteria(s) \n", d, bacterias);
        bacterias = bacterias * 2;
        
        d++;
    }

    return 0;
}