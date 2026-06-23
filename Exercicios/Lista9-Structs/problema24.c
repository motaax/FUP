#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[50];
    char cep[20];
    char cidade[50];
    char estado[30];
    char pais[30];
} Endereco;

typedef struct {
    int ddd;
    char numero[20];
} Telefone;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Data aniversario;
    char observacao[100];
} Pessoa;

Pessoa agenda[MAX];
int qtd = 0;

void inserirPessoa() {

    if(qtd == MAX){
        printf("Agenda cheia!\n");
        return;
    }

    Pessoa p;

    printf("Nome: ");
    scanf(" %[^\n]", p.nome);

    printf("Email: ");
    scanf(" %[^\n]", p.email);

    printf("Rua: ");
    scanf(" %[^\n]", p.endereco.rua);

    printf("Numero: ");
    scanf("%d", &p.endereco.numero);

    printf("Complemento: ");
    scanf(" %[^\n]", p.endereco.complemento);

    printf("Bairro: ");
    scanf(" %[^\n]", p.endereco.bairro);

    printf("CEP: ");
    scanf(" %[^\n]", p.endereco.cep);

    printf("Cidade: ");
    scanf(" %[^\n]", p.endereco.cidade);

    printf("Estado: ");
    scanf(" %[^\n]", p.endereco.estado);

    printf("Pais: ");
    scanf(" %[^\n]", p.endereco.pais);

    printf("DDD: ");
    scanf("%d", &p.telefone.ddd);

    printf("Numero do telefone: ");
    scanf(" %[^\n]", p.telefone.numero);

    printf("Dia do aniversario: ");
    scanf("%d", &p.aniversario.dia);

    printf("Mes do aniversario: ");
    scanf("%d", &p.aniversario.mes);

    printf("Ano do aniversario: ");
    scanf("%d", &p.aniversario.ano);

    printf("Observacao: ");
    scanf(" %[^\n]", p.observacao);

    agenda[qtd] = p;
    qtd++;

    printf("\nPessoa cadastrada com sucesso!\n");
}

int main() {
    inserirPessoa();

    printf("\nNome: %s\n", agenda[0].nome);
    printf("Email: %s\n", agenda[0].email);
    printf("Telefone: (%d) %s\n", agenda[0].telefone.ddd, agenda[0].telefone.numero);

    return 0;
}