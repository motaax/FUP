#include <stdio.h>

int indice_menor(int v[], int i, int n){
    int menor = v[i];
    int ind = i;
    for(int k = i; k < n; k++){
        if(v[k] < menor){
            menor = v[k];
            ind = k;
        }
    }
    return ind;
}

void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void selection_sort_rec(int v[], int i, int n){
    if(i == n-1){
        return;
    }
    int ind_menor = indice_menor(v, i, n);

    troca(v, i, ind_menor);

    selection_sort_rec(v, i+1, n);
}

int main(){
    int v[5] = {30, 20, 10, 50, 40};

    printf("Vetor antes: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }

    selection_sort_rec(v, 0, 5);

    printf("\nVetor depois: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    return 0;
}