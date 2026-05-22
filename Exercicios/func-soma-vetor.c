#include <stdio.h>

int soma(int v[], int n){
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += v[i];
    }

    return s;
}

int main(){
    int v[100], n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    printf("%d\n", soma(v, n));
}

