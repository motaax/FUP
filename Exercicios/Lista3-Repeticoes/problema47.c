#include <stdio.h>
 
int main() {
    int op = 0;
    int n1, n2;

    while(op != 5) {
        printf("Escolha a opcao: \n");
        printf("[1] - Adicao \n");
        printf("[2] - Subtracao \n");
        printf("[3] - Multiplicacao \n");
        printf("[4] - Divisao \n");
        printf("[5] - Sair \n");
        scanf("%d", &op);

        if(op >= 1 && op <= 4) {
            printf("Digite um numero: \n");
            scanf("%d", &n1);
            printf("Digite outro numero: \n");
            scanf("%d", &n2);
        }

        if(op == 1) {
            printf("A soma: %d\n", n1 + n2);
        }

        if(op == 2) {
            printf("A subtracao: %d\n", n1 - n2);
        }

        if(op == 3) {
            printf("A multiplicacao: %d\n", n1 * n2);
        }

        if(op == 4) {
            if(n2 != 0)
                printf("A divisao: %.2f\n", (float) n1 / n2);
            else
                printf("Erro: divisao por zero!\n");
        }

        if(op == 5) {
            printf("Saindo do programa!\n");
        }
    }

    return 0;
}