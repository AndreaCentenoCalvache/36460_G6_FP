// Realizado por Julián Hernández
// Fecha: 18/11/2026
// Ejercicio: Menú de Vector y Matriz
// NRC: 36460


#include <stdio.h>

#define MAX 10

void ingresarMatriz() {
    float matriz[MAX][MAX];
    int filas, columnas, i, j, ok, c;

    do {
        printf("Filas (1-%d): ", MAX);
        ok = scanf("%d", &filas);
        while ((c = getchar()) != '\n' && c != EOF);
        if (ok != 1 || filas < 1 || filas > MAX) {
            printf("Error: Ingrese un valor entre 1 y %d.\n", MAX);
        }
    } while (ok != 1 || filas < 1 || filas > MAX);

    do {
        printf("Columnas (1-%d): ", MAX);
        ok = scanf("%d", &columnas);
        while ((c = getchar()) != '\n' && c != EOF);
        if (ok != 1 || columnas < 1 || columnas > MAX) {
            printf("Error: Ingrese un valor entre 1 y %d.\n", MAX);
        }
    } while (ok != 1 || columnas < 1 || columnas > MAX);

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            do {
                printf("Elemento [%d][%d]: ", i, j);
                ok = scanf("%f", &matriz[i][j]);
                while ((c = getchar()) != '\n' && c != EOF);
                if (ok != 1 || matriz[i][j] < 0) {
                    printf("Error: No se permiten numeros negativos ni letras.\n");
                }
            } while (ok != 1 || matriz[i][j] < 0);
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%8.2f", matriz[i][j]);
        }
        printf("\n");
    }
}

void ingresarVector() {
    int vector[MAX];
    int tamano, i, ok, c;

    do {
        printf("Tamano (1-%d): ", MAX);
        ok = scanf("%d", &tamano);
        while ((c = getchar()) != '\n' && c != EOF);
        if (ok != 1 || tamano < 1 || tamano > MAX) {
            printf("Error: Ingrese un valor entre 1 y %d.\n", MAX);
        }
    } while (ok != 1 || tamano < 1 || tamano > MAX);

    for (i = 0; i < tamano; i++) {
        do {
            printf("Elemento [%d]: ", i);
            ok = scanf("%d", &vector[i]);
            while ((c = getchar()) != '\n' && c != EOF);
            if (ok != 1 || vector[i] < 0) {
                printf("Error: No se permiten numeros negativos ni letras.\n");
            }
        } while (ok != 1 || vector[i] < 0);
    }

    printf("\nVector:\n");
    for (i = 0; i < tamano; i++) {
        printf("%6d", vector[i]);
    }
    printf("\n");
}

int main() {
    int op, ok, c;

    printf("Bienvenido\n");
    printf("Menu:\n");

    do {
        printf("\n1. Matriz (decimales)\n2. Vector (enteros)\n3. Salir\nOp: ");
        ok = scanf("%d", &op);
        while ((c = getchar()) != '\n' && c != EOF);

        if (ok != 1) {
            op = 0;
        }

        switch (op) {
            case 1:
                ingresarMatriz();
                break;
            case 2:
                ingresarVector();
                break;
            case 3:
                printf("Hasta pronto!\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (op != 3);

    return 0;
}
