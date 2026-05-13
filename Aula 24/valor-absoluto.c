#include <stdio.h>

float absoluto(float x) {
    if(x >= 0) {
        return x;
    } else {
        return -x;
    }
}

int main() {
    int a;
    scanf("%f", &a);

    float abs = absoluto(a);
    printf("%.2f \n", abs);

    return 0;
}