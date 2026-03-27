#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    
    while(i <= n) {
        printf("i: %d \n", i);
        i++;
    }

    printf("FIM!");

    return 0;
}