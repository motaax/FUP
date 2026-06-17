#include <stdio.h>
#include <string.h>

struct Usuario {
    char email[100];
    char senha[100];
    char apelido[100];
    int idade;
    float pontos;
};

int main() {
    char emailLogin[100], senhaLogin[100];
    int n, encontrou = 0;

    scanf("%s", emailLogin);
    scanf("%s", senhaLogin);

    scanf("%d", &n);

    struct Usuario usuarios[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s %d %f",
              usuarios[i].email,
              usuarios[i].senha,
              usuarios[i].apelido,
              &usuarios[i].idade,
              &usuarios[i].pontos);

        if (strcmp(emailLogin, usuarios[i].email) == 0 &&
            strcmp(senhaLogin, usuarios[i].senha) == 0) {

            printf("%s\n", usuarios[i].apelido);
            printf("%d\n", usuarios[i].idade);
            printf("%.2f\n", usuarios[i].pontos);

            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Email ou senha incorretos\n");
    }

    return 0;
}