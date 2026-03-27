#include <stdio.h>

int main() {
    int id1, id2, id3, id4;
    scanf("%d %d %d %d", &id1, &id2, &id3, &id4);

    if(id1 >= 18 || id2 >= 18 || id3 >= 18 || id4 >= 18) {
        printf("Apto \n");
    } else {
        printf("Inaptos \n");
    }

    return 0;
}