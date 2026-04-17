#include <stdio.h>
#include <string.h>

int main() {
    char respostas[100];
    char gabarito[100];
    int i, acertos = 0;

    scanf("%s", respostas);
    scanf("%s", gabarito);

    int tamanho = strlen(respostas);

    for(i = 0; i < tamanho; i++) {
        if(respostas[i] == gabarito[i]) {
            acertos++;
        }
    }

    printf("%d\n", acertos);

    return 0;
}