#include <stdio.h>

int main() {
    int N, i = 1;

    scanf("%d", &N);

    while (i <= N) {
        if (i == 1) {
            printf("1 ovelha\n");
        } else {
            printf("%d ovelhas\n", i);
        }
        
        i++;
    }

    return 0;
}