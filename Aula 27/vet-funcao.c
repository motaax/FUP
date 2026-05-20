#include <stdio.h>

int str_tam(char txt[]) {
    int tam = 0;
    for(int i = 0; txt[i] != '\0'; i++) {
        tam++;
    }

    return tam;
}
 
int main() {
    char v[10] = "fup";
    printf("Tamanho: %d \n", str_tam(v));
    printf("%s \n", v);

    return 0;
}