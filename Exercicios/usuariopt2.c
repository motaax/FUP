#include <stdio.h>

struct Usuario {
    char email[100];
    char senha[100];
    char apelido[100];
    int idade;
    float pontos;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Usuario usuarios[n];

    float soma = 0;
    int qtd = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s %d %f",
              usuarios[i].email,
              usuarios[i].senha,
              usuarios[i].apelido,
              &usuarios[i].idade,
              &usuarios[i].pontos);

        if (usuarios[i].idade <= 16) {
            soma += usuarios[i].pontos;
            qtd++;
        }
    }

    if (qtd > 0)
        printf("%.2f\n", soma / qtd);
    else
        printf("-1\n");

    return 0;
}