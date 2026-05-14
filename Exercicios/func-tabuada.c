#include <stdio.h>

void printa_tabuada(int x){
    int i;

    for(i = 1; i <= 10; i++){
        printf("%dx%d=%d\n", x, i, x * i);
    }
}

int main(){
    printf("Tabuada de 1:\n");
    printa_tabuada(1);
    
    printf("Tabuada de 2:\n");
    printa_tabuada(2);
    
    printf("Tabuada de 3:\n");
    printa_tabuada(3);
    
    printf("Tabuada de 4:\n");
    printa_tabuada(4);
    
    printf("Tabuada de 5:\n");
    printa_tabuada(5);
    
    printf("Tabuada de 6:\n");
    printa_tabuada(6);
    
    printf("Tabuada de 7:\n");
    printa_tabuada(7);

    printf("Tabuada de 8:\n");
    printa_tabuada(8);

    printf("Tabuada de 9:\n");
    printa_tabuada(9);

    return 0;
}