
#include <stdio.h>

int main()
{
    int op;
    int n;
    int i, j;

    do
    {
        // Menu de figuras
        printf("\nMENU DE FIGURAS\n");
        printf("1. Cuadrado sin relleno\n");
        printf("2. Triangulo sin relleno\n");
        printf("3. Triangulo invertido con relleno\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                // Cuadrado sin relleno

                do
                {
                    printf("Ingrese el lado del cuadrado: ");
                    scanf("%d", &n);

                    if (n <= 0)
                    {
                        printf("Error: ingrese un numero positivo.\n");
                    }

                } while (n <= 0);

                i = 1;

                // Recorrer las filas
                do
                {
                    j = 1;

                    // Recorrer las columnas
                    do
                    {
                        if (i == 1 || i == n || j == 1 || j == n)
                        {
                            printf("22");
                        }
                        else
                        {
                            printf("  ");
                        }

                        j++;

                    } while (j <= n);

                    printf("\n");
                    i++;

                } while (i <= n);

                break;

            case 2:
                // Triangulo sin relleno

                do
                {
                    printf("Ingrese la altura del triangulo: ");
                    scanf("%d", &n);

                    if (n <= 0)
                    {
                        printf("Error: ingrese un numero positivo.\n");
                    }

                } while (n <= 0);

                i = 1;

                // Recorrer las filas
                do
                {
                    j = 1;

                    // Recorrer las columnas
                    do
                    {
                        if (j == 1 || j == i || i == n)
                        {
                            printf("22");
                        }
                        else
                        {
                            printf("  ");
                        }

                        j++;

                    } while (j <= i);

                    printf("\n");
                    i++;

                } while (i <= n);

                break;

            case 3:
                // Triangulo invertido con relleno

                do
                {
                    printf("Ingrese la altura del triangulo: ");
                    scanf("%d", &n);

                    if (n <= 0)
                    {
                        printf("Error: ingrese un numero positivo.\n");
                    }

                } while (n <= 0);

                i = n;

                // Recorrer las filas
                do
                {
                    j = 1;

                    // Dibujar las columnas
                    do
                    {
                        printf("22");
                        j++;

                    } while (j <= i);

                    printf("\n");
                    i--;

                } while (i >= 1);

                break;

            case 4:
                // Salir del programa
                printf("Saliendo...\n");
                break;

            default:
                // Opcion no valida
                printf("Opcion no valida. Intente nuevamente.\n");
                break;
        }

    } while (op != 4);
}
