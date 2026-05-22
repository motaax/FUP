#include <stdio.h>

int tamanho_string(char S[]){
	int tam = 0;
    for(int i = 0; S[i] != '\0'; i++) {
        tam++;
    }

    return tam;
}

int main(){
	char S[100];
	scanf("%[^\n]", S);

	int tamanho = tamanho_string(S);
	printf("Tamanho da string: %d\n", tamanho);
	return 0;
}
