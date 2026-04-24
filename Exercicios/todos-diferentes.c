#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int elementos[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &elementos[i]);
    }

    int repetiu = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (elementos[i] == elementos[j]) {
                repetiu = 1;
                break;
            }
        }
        if (repetiu) {
            break;
        }
    }

    if (repetiu) {
        printf("Algum elemento repete\n");
    } else {
        printf("Todos diferentes\n");
    }

    return 0;
}