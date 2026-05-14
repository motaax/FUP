#include <stdio.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }
    
    int resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i;
    }

    return resultado;
}

int combinacao(int n, int k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int res = combinacao(n, k);
    printf("%d\n", res);
}