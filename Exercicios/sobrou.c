#include <stdio.h>

int main() {
    int qnt1, qnt2, qnt3;

    printf("Digite a quantidade dos 3 produtos: \n");
    scanf("%d %d %d", &qnt1, &qnt2, &qnt3);

    int valor1, valor2, valor3;

    printf("Digite o valor dos 3 produtos: \n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    int saldo;

    printf("Digite o seu saldo: \n");
    scanf("%d", &saldo);

    float multiplicacao = (qnt1 * valor1) + (qnt2 * valor2) + (qnt3 * valor3);

    float troco = saldo - multiplicacao;

    printf("O seu troco e: %.2f \n", troco);

    return 0;
}