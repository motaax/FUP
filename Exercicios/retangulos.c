#include <stdio.h>
int main() {
    int lin, col;
    scanf("%d %d", &lin, &col);
    
    printf("%d %d\n", lin, col);

    int i, j;
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}