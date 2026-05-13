#include <stdio.h>

int maior(int a, int b){
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int m = maior(a,b);
    printf("%d\n", m);
    return 0;
}