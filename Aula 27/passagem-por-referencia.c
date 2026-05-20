#include <stdio.h>
 
int main() {
    int a = 2, b = 5;

    int *ptr_a, *ptr_b;
    ptr_a = &a;
    ptr_b = &b;

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}