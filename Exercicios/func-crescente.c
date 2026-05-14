#include <stdio.h>

int crescente(int x1, int x2, int x3){
    if(x1 < x2 && x2 < x3) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int x1, x2, x3;

    scanf("%d %d %d", &x1, &x2, &x3);

    if(crescente(x1, x2, x3)){
        printf("crescente\n");
    } else {
        printf("nao crescente\n");
    }

    return 0;
}