#include <stdio.h>

void insere_final(int V[], int *tam, int elem){
    V[*tam] = elem;
    (*tam)++;        
}

int main(){
    int vetor[100];
    int n;
    int novo_elem;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &novo_elem);
    
    printf("Vetor antes:[ ");

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("]\n");

    insere_final(vetor, &n, novo_elem);

    printf("Vetor depois:[ ");

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("]\n");

    return 0;
}