#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char linha[1000];

    scanf("%d", &N);
    getchar(); 

    fgets(linha, sizeof(linha), stdin);

    int vetor[100];
    int i = 0, j = 0, num = 0, sinal = 1, idx = 0;

    while(linha[j] != '\0') {
        if(linha[j] == '-') {
            sinal = -1;
        }
        else if(linha[j] >= '0' && linha[j] <= '9') {
            num = num * 10 + (linha[j] - '0');
        }
        else { 
            vetor[i++] = num * sinal;
            num = 0;
            sinal = 1;
        }
        j++;
    }

    if(i < N) {
        vetor[i++] = num * sinal;
    }

    int menor = vetor[0];
    int indice = 0;

    for(i = 1; i < N; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
            indice = i;
        }
    }

    printf("%d\n", indice);

    return 0;
}