#include <stdio.h>

struct Operacoes {
    int soma;
    int subtracao;
    float divisao;
    int multiplicacao;
};

struct Operacoes calcularOperacoes(int num1, int num2) {
    struct Operacoes op;

    op.soma = num1 + num2;
    op.subtracao = num1 - num2;
    op.divisao = (float) num1 / num2;
    op.multiplicacao = num1 * num2;

    return op;
}

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    struct Operacoes resultados = calcularOperacoes(num1, num2);

    printf("%d ", resultados.soma);
    printf("%d ", resultados.subtracao);
    printf("%.1f ", resultados.divisao);
    printf("%d\n", resultados.multiplicacao);

    return 0;
}