#include <stdio.h>

#define V 5
#define A 5

typedef struct {
    int origem;
    int destino;
} Voo;

typedef struct {
    int codigo;
    int saidas;
    int chegadas;
} Aeroporto;

int main() {

    Voo voos[V];
    Aeroporto aeroportos[A];

    int i;

    for(i = 0; i < A; i++) {
        aeroportos[i].codigo = i;
        aeroportos[i].saidas = 0;
        aeroportos[i].chegadas = 0;
    }

    for(i = 0; i < V; i++) {

        do {
            printf("Voo %d\n", i + 1);

            printf("Codigo do aeroporto de origem (0 a %d): ", A - 1);
            scanf("%d", &voos[i].origem);

            printf("Codigo do aeroporto de destino (0 a %d): ", A - 1);
            scanf("%d", &voos[i].destino);

            if(voos[i].origem < 0 || voos[i].origem >= A ||
               voos[i].destino < 0 || voos[i].destino >= A) {

                printf("Codigo de aeroporto invalido!\n");
                printf("Digite novamente.\n\n");
            }

        } while(voos[i].origem < 0 || voos[i].origem >= A ||
                voos[i].destino < 0 || voos[i].destino >= A);

        aeroportos[voos[i].origem].saidas++;
        aeroportos[voos[i].destino].chegadas++;
    }

    printf("VOOS:\n");

    for(i = 0; i < V; i++) {

        printf("Voo %d: Origem = %d | Destino = %d\n",
               i + 1,
               voos[i].origem,
               voos[i].destino);
    }

    printf("AEROPORTOS:\n");

    for(i = 0; i < A; i++) {

        printf("Aeroporto %d\n", aeroportos[i].codigo);

        printf("Voos que saem: %d\n",
               aeroportos[i].saidas);

        printf("Voos que chegam: %d\n\n",
               aeroportos[i].chegadas);
    }

    return 0;
}