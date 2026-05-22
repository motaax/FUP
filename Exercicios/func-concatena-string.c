#include <stdio.h>

int tam_string(char s[]){
    if(*s == 0) return 0;
    return 1 + tam_string(s+1);
}

void concatena_string(char dest[], char orig[]){
    int pos = tam_string(dest);

    if(*orig == '\0'){
        dest[pos] = '\0';
        return;
    }

    dest[pos] = *orig;
    concatena_string(dest + 1, orig + 1);
}

int main(){
    char string1[100];
    char string2[100];

    scanf("%[^\n] ", string1);
    scanf("%[^\n]", string2);

    printf("Antes\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    concatena_string(string1, string2);

    printf("Depois\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    return 0;
}