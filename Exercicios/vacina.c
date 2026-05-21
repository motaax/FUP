#include <stdio.h>

int main() {
    int vac;
    scanf("%d", &vac);

    int forca[vac];
    for (int i = 0; i < vac; i++) {
        scanf("%d", &forca[i]);
    }

    int pacientes[vac];
    for (int i = 0; i < vac; i++) {
        scanf("%d", &pacientes[i]);
    }

    // Bubble Sort das vacinas
    for (int i = 0; i < vac - 1; i++) {
        for (int j = 0; j < vac - 1 - i; j++) {
            if (forca[j] > forca[j + 1]) {
                int temp = forca[j];
                forca[j] = forca[j + 1];
                forca[j + 1] = temp;
            }
        }
    }

    // Bubble Sort dos pacientes
    for (int i = 0; i < vac - 1; i++) {
        for (int j = 0; j < vac - 1 - i; j++) {
            if (pacientes[j] > pacientes[j + 1]) {
                int temp = pacientes[j];
                pacientes[j] = pacientes[j + 1];
                pacientes[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < vac; i++) {
        if (forca[i] <= pacientes[i]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}