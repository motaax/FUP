#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int compararDatas(struct Data dt1, struct Data dt2) {
    if (dt1.ano < dt2.ano)
        return -1;
    if (dt1.ano > dt2.ano)
        return 1;

    if (dt1.mes < dt2.mes)
        return -1;
    if (dt1.mes > dt2.mes)
        return 1;

    if (dt1.dia < dt2.dia)
        return -1;
    if (dt1.dia > dt2.dia)
        return 1;

    return 0;
}

int main() {
    struct Data d1, d2;

    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    int res = compararDatas(d1, d2);

    if (res == -1)
        printf("Mais antiga\n");
    else if (res == 1)
        printf("Mais recente\n");
    else
        printf("Iguais\n");

    return 0;
}