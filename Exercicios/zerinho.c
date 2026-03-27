#include <stdio.h>

int main() {
    int jog1, jog2, jog3;

    printf("Digite 0 ou 1 \n");
    scanf("%d %d %d", &jog1, &jog2, &jog3);

    //Empate    
    if(jog1 == jog2 && jog2 == jog3) {
        printf("Empate \n");
    //Jogador 1    
    } else if(jog1 != jog2 && jog1 != jog3) {
        printf("Jogador 1 \n"); 
    //Jogador 2
    } else if (jog2 != jog1 && jog2 != jog3) {
        printf("Jogador 2 \n");
    //Jogador 3
    } else {
        printf("Jogador 3");    
    }

    return 0;
}