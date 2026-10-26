#include <stdio.h>

int main() {
    int n, fila, col;

    printf("Ingrese n: ");
    scanf("%d", &n);

    for (fila = 1; fila <= n; fila++) {
        for (col = 1; col <= fila; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

