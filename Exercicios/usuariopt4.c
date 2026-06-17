#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

    int regra1 = 1, regra2 = 1, regra3 = 1, regra4 = 1;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s %d %f",
              usuarios[i].email,
              usuarios[i].senha,
              usuarios[i].apelido,
              &usuarios[i].idade,
              &usuarios[i].pontos);

        /* Regra 2 */
        int tamanho = strlen(usuarios[i].senha);
        int temLetra = 0, temDigito = 0;

        for (int j = 0; j < tamanho; j++) {
            if (isalpha(usuarios[i].senha[j]))
                temLetra = 1;

            if (isdigit(usuarios[i].senha[j]))
                temDigito = 1;
        }

        if (tamanho < 4 || !temLetra || !temDigito)
            regra2 = 0;

        /* Regra 3 */
        if (usuarios[i].idade < 12 || usuarios[i].idade > 200)
            regra3 = 0;

        /* Regra 4 */
        if (usuarios[i].pontos < 0)
            regra4 = 0;
    }

    /* Regra 1 */
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(usuarios[i].email, usuarios[j].email) == 0) {
                regra1 = 0;
            }
        }
    }

    printf("Regra 1: %s\n", regra1 ? "ok" : "fail");
    printf("Regra 2: %s\n", regra2 ? "ok" : "fail");
    printf("Regra 3: %s\n", regra3 ? "ok" : "fail");
    printf("Regra 4: %s\n", regra4 ? "ok" : "fail");

    return 0;
}