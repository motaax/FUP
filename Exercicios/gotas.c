#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n % 3 == 0) {
        printf("Pling \n");
    } else if (n % 5 == 0) {
        printf("Plang \n");
    } else if(n % 7 == 0) {
        printf("Plong \n");
    } else {
        printf("%d", n);
    }

    return 0;
}