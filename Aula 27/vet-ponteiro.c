#include <stdio.h>
 
int main() {
    char v[10];
    printf("%p \n", &v[0]);
    printf("%p \n", &v[1]);
    printf("%p \n", &v[2]);
    printf("%p \n", &v[3]);
    printf("%p \n", &v[4]);
    printf("%p \n", &v[5]);
    printf("%p \n", &v[6]);
    printf("%p \n", &v[7]);
    printf("%p \n", &v[8]);

    return 0;
}