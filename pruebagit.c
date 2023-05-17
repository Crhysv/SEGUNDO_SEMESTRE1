#include <stdio.h>

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int matrizr[3][3];
    int i, j;

    printf("Ingrese los valores para la matriz 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese el valor posicion[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los valores para la matriz 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese el valor posicion[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("La matriz resultante es:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
