#include <stdio.h>
#include <string.h>

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data data;
    struct Horario horario;
    char texto[100];
};

int main() {
    struct Compromisso c;

    c.data.dia = 12;
    c.data.mes = 6;
    c.data.ano = 2026;

    c.horario.hora = 14;
    c.horario.minutos = 30;
    c.horario.segundos = 0;

    strcpy(c.texto, "Reuniao de trabalho");

    printf("Compromisso: %s\n", c.texto);
    printf("Data: %02d/%02d/%04d\n",
           c.data.dia, c.data.mes, c.data.ano);
    printf("Horario: %02d:%02d:%02d\n",
           c.horario.hora,
           c.horario.minutos,
           c.horario.segundos);

    return 0;
}