#include <stdio.h>

void remove_final(int V[], int *tam){
    if(*tam > 0){
        (*tam)--;
    }
}

int main(){
    int vetor[100];
    int n;
    int novo_elem;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor antes:[ ");

    for(int i = 0; i < n; i++){
      printf("%d ", vetor[i]);
    }

    printf("]\n");

    remove_final(vetor, &n);
    
    printf("Vetor depois:[ ");

    for(int i = 0; i < n; i++){
      printf("%d ", vetor[i]);
    }

    printf("]\n");

    return 0;
}