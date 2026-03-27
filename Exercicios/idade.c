#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    
    if(idade <= 10) {
        printf("Infantil!");
    } else if(idade >= 11 && idade <= 17) {
        printf("Juvenil!");
    } else if(idade >= 18) {
        printf("Adulto!");
    }
    
    return 0;
}