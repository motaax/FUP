#include <stdio.h>

int diferentes(int x1, int x2, int x3){
    if(x1 != x2 && x1 != x3 && x2 != x1 && x2 != x3 && x3 != x1 && x3 != x2) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    if(diferentes(x1, x2, x3)){
        printf("todos diferentes\n");
    } else {
        printf("tem repetido\n");
    }
    
    return 0;
}


