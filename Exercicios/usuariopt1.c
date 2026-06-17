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
    int adultos = 0;

    for(int i = 0; i < n; i++) {
        scanf("%s %s %s %d %f", usuarios[i].email, usuarios[i].senha, usuarios[i].apelido, &usuarios[i].idade, &usuarios[i].pontos);

        if(usuarios[i].idade >= 18) {
            adultos++;
        }
    }

    printf("%d\n", adultos);

    return 0;
}
