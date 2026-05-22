#include <stdio.h>

void copia_string(char orig[], char dest[]){
    int i = 0;

    while(orig[i] != '\0'){
        dest[i] = orig[i];
        i++;
    }

    dest[i] = '\0';
}

int main(){
    char string1[100];
    char string2[100] = "";

    scanf("%[^\n]", string1);

    printf("Antes\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    copia_string(string1, string2);

    printf("Depois\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    return 0;
}