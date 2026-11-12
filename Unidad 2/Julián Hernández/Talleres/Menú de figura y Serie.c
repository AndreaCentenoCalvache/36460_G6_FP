//Realizado por Julián Hernández
//36460
//Fecha: 12/11/2026
//Ejercicio ( menú de figura y serie )

#include <stdio.h>

int main() {
    int op, n, i, j;
    int a, b, temp;

    do {
        printf("\nMENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch(op) {

            case 1:
                // FIGURA
                do {
                    printf("Lado del cuadrado: ");
                    scanf("%d", &n);
                } while(n <= 0);

                // Bucle filas
                for(i = 1; i <= n; i++) {

                    // Bucle columnas
                    for(j = 1; j <= n; j++) {
                        printf("*");
                    }

                    printf("\n");
                }
                break;

            case 2:
                // SERIE DE FIBONACCI
                printf("Ingrese n: ");
                scanf("%d", &n);

                if(n < 1) {
                    printf("Ingrese numero >= 1\n");
                } else {
                    a = 0;
                    b = 1;
                    printf("%d ", a);

                    if(n > 1) {
                        printf("%d ", b);

                        for(i = 3; i <= n; i++) {
                            temp = a + b;
                            printf("%d ", temp);
                            a = b;
                            b = temp;
                        }
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }

    } while(op != 3);

    return 0;
}
