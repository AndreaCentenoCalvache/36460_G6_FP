/*
   Universidad de las Fuerzas Armadas-ESPE
   Asignatura  : Fundamentos de Programacion
   Estudiante  : Andrea Centeno
   NRC         : 36460
   Fecha       : 12/11/2026
   Enunciado   : Menu con figura
   Descripcion : Menu de tres opciones:
                 1. Figura: triangulo hueco formado por el numero 1.
                 2. Serie : suma 1^1 + 2^2 + ... + n^n.
                 3. Salir
   Entradas    : opcion del menu, numero de filas, numero de terminos.
   Salidas     : figura en pantalla o resultado de la serie.
*/

#include <stdio.h>

#define OPCION_FIGURA 1
#define OPCION_SERIE  2
#define OPCION_SALIR  3
#define MAX_TERMINOS  15   /* n^n con n=16 desborda unsigned long long */

/* Pide un entero en [min, max] y repite hasta que sea valido */
static int leerEnRango(const char *mensaje, int min, int max)
{
    int valor;
    int ok;

    do
    {
        printf("%s", mensaje);
        ok = scanf("%d", &valor);
        if (ok != 1)
        {
            while (getchar() != '\n');   /* limpia el bufer */
            valor = min - 1;
        }
        if (valor < min || valor > max)
            printf("Valor no valido (%d a %d).\n", min, max);
    } while (valor < min || valor > max);

    return valor;
}

/* Calcula base^exp con enteros */
static unsigned long long potencia(int base, int exp)
{
    unsigned long long r = 1;
    int k;

    for (k = 0; k < exp; k++)
        r *= base;
    return r;
}

/* Dibuja un triangulo hueco de 1 con el numero de filas indicado */
static void dibujarFigura(int filas)
{
    int f, c;

    for (f = 1; f <= filas; f++)
    {
        /* espacios a la izquierda para centrar */
        for (c = 1; c <= filas - f; c++)
            printf(" ");

        /* bordes y base */
        for (c = 1; c <= 2 * f - 1; c++)
        {
            if (c == 1 || c == 2 * f - 1 || f == filas)
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }
}

/* Muestra y calcula la serie 1^1 + 2^2 + ... + n^n */
static void calcularSerie(int terminos)
{
    unsigned long long suma = 0;
    int i;

    for (i = 1; i <= terminos; i++)
    {
        if (i == terminos)
            printf("%d^%d", i, i);
        else
            printf("%d^%d + ", i, i);
        suma += potencia(i, i);
    }
    printf("\nEl resultado es %llu\n", suma);
}

int main(void)
{
    int opcion;

    do
    {
        printf("\nMENU\n1. Figura\n2. Serie\n3. Salir\n");
        opcion = leerEnRango("Ingrese opcion: ", OPCION_FIGURA, OPCION_SALIR);

        switch (opcion)
        {
            case OPCION_FIGURA:
                dibujarFigura(leerEnRango("Ingrese numero de filas: ", 1, 50));
                break;
            case OPCION_SERIE:
                calcularSerie(leerEnRango("Ingrese numero de terminos: ", 1, MAX_TERMINOS));
                break;
            case OPCION_SALIR:
                printf("Saliendo...\n");
                break;
        }
    } while (opcion != OPCION_SALIR);

    return 0;
}
