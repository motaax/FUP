#include <stdio.h>
#include <stdlib.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int bissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int diasNoMes(int mes, int ano) {
    int diasMes[] = {31, 28, 31, 30, 31, 30,
                     31, 31, 30, 31, 30, 31};

    if (mes == 2 && bissexto(ano))
        return 29;

    return diasMes[mes - 1];
}

long totalDias(struct dma data) {
    long dias = 0;

    // Soma os dias dos anos anteriores
    for (int a = 1; a < data.ano; a++) {
        dias += bissexto(a) ? 366 : 365;
    }

    // Soma os dias dos meses anteriores
    for (int m = 1; m < data.mes; m++) {
        dias += diasNoMes(m, data.ano);
    }

    // Soma os dias do mês atual
    dias += data.dia;

    return dias;
}

int main() {
    struct dma data1, data2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    long dias1 = totalDias(data1);
    long dias2 = totalDias(data2);

    printf("Numero de dias entre as datas: %ld\n", labs(dias2 - dias1));

    return 0;
}