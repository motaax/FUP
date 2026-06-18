#include <stdio.h>

typedef struct {
    char nome[20];
    int idade;
    char sexo;
} Idosa;

int main() {
    int n;
    scanf("%d", &n);

    Idosa idosa[n];

    int indice = -1;

    for (int i = 0; i < n; i++) {
        scanf("%s", idosa[i].nome);
        scanf("%d", &idosa[i].idade);
        scanf(" %c", &idosa[i].sexo);

        if (idosa[i].sexo == 'F' || idosa[i].sexo == 'f') {
            if (indice == -1 || idosa[i].idade > idosa[indice].idade) {
                indice = i;
            }
        }
    }

    if (indice == -1) {
        printf("nao tem mulher\n");
    } else {
        printf("%s\n", idosa[indice].nome);
    }

    return 0;
}