#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char sexo;
    int cpf;
    char nascimento[11];
    int setor;
    char cargo[31];
    float salario;
} Funcionario;

int main() {
    Funcionario f1;

    printf("Digite o seu nome:\n");
    scanf("%49s", f1.nome);

    printf("Digite a sua idade:\n");
    scanf("%d", &f1.idade);

    printf("Digite o seu sexo (M/F):\n");
    scanf(" %c", &f1.sexo);

    printf("Digite o seu CPF:\n");
    scanf("%d", &f1.cpf);

    printf("Digite a sua data de nascimento (dd/mm/aaaa):\n");
    scanf("%10s", f1.nascimento);

    printf("Digite o seu setor (0-99):\n");
    scanf("%d", &f1.setor);

    printf("Digite o seu cargo:\n");
    scanf("%30s", f1.cargo);

    printf("Digite o seu salario:\n");
    scanf("%f", &f1.salario);

    printf("\n=== DADOS DO FUNCIONARIO ===\n");
    printf("Nome: %s\n", f1.nome);
    printf("Idade: %d\n", f1.idade);
    printf("Sexo: %c\n", f1.sexo);
    printf("CPF: %d\n", f1.cpf);
    printf("Data de Nascimento: %s\n", f1.nascimento);
    printf("Setor: %d\n", f1.setor);
    printf("Cargo: %s\n", f1.cargo);
    printf("Salario: R$ %.2f\n", f1.salario);

    return 0;
}