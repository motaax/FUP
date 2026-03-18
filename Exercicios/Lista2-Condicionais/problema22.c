#include <stdio.h>

int main() {
    int idade, servico;
    scanf("%d %d", &idade, &servico);

    if (idade >= 65) {
        printf("Pode se aposentar! \n");
    } else if (servico >= 30) {
        printf("Pode se aposentar! \n");
    } else if (idade >= 60 && servico >= 25) {
        printf("Pode se aposentar! \n");
    } else {
        printf("Nao pode se aposentar!");
    }

    return 0;
}