#include <stdio.h>

int iguais(int v1[], int n1, int v2[], int n2){
    if (n1 != n2) {
        return 0;
    }

    for (int i = 0; i < n1; i++) {
        if (v1[i] != v2[i]) {
            return 0;
        }
    }

    return 1;
}

int main(){
    int v1[100], n1;
    int v2[100], n2;

    scanf("%d", &n1);
    for(int i = 0; i < n1; i++){
        scanf("%d", &v1[i]);
    }

    scanf("%d", &n2);
    for(int i = 0; i < n2; i++){
        scanf("%d", &v2[i]);
    }

    printf("%d\n", iguais(v1, n1, v2, n2));

    return 0;
}