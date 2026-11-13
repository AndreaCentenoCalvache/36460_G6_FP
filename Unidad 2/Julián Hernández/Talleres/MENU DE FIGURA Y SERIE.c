// Realizado por Julián Hernández
// Fecha: 12/11/2026
// Ejercicio: Menú de Figura y Serie Fibonacci
// Versión: Código fuente completo para compilar

#include <stdio.h>

// Función para dibujar un cuadrado
void dibujarCuadrado(int lado)
{
    int fila, columna;
    for (fila = 1; fila <= lado; fila++)
    {
        for (columna = 1; columna <= lado; columna++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Función para imprimir la serie Fibonacci
void imprimirFibonacci(int cantidadTerminos)
{
    int a = 0;
    int b = 1;
    int temp, i;

    if (cantidadTerminos >= 1)
        printf("%d ", a);
    if (cantidadTerminos >= 2)
        printf("%d ", b);

    for (i = 3; i <= cantidadTerminos; i++)
    {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }
    printf("\n");
}

int main()
{
    int opcion, valorN;

    do
    {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Dibujar Figura (Cuadrado)\n");
        printf("2. Mostrar Serie Fibonacci\n");
        printf("3. Salir del programa\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("\n--- DIBUJO DE CUADRADO ---\n");
                do
                {
                    printf("Ingrese el lado del cuadrado (mayor a 0): ");
                    scanf("%d", &valorN);
                    if (valorN <= 0)
                        printf("ERROR: El valor debe ser mayor a 0, intente nuevamente.\n");
                } while (valorN <= 0);
                dibujarCuadrado(valorN);
                break;

            case 2:
                printf("\n--- SERIE FIBONACCI ---\n");
                do
                {
                    printf("Ingrese la cantidad de terminos (>= 1): ");
                    scanf("%d", &valorN);
                    if (valorN < 1)
                        printf("ERROR: El valor debe ser >= 1, intente nuevamente.\n");
                } while (valorN < 1);
                imprimirFibonacci(valorN);
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("OPCION NO VALIDA, intente nuevamente.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}
