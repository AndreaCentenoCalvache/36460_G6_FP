/*

   Univercidad de las Fuerzas Armadas-ESPE
   Asignatura  : Fundamentos de Programación
   Estudiante  : Andrea Centeno
   NRC         :36460
   Fecha       : 12/11/2026
   Enunciado: Menú con figura
   Descripción : Menú de tres opciones:
                 1. Figura: cuadrado hueco formado por el número 1.
                 2. Serie : suma 1^1 + 2^2 + ... + n^n.
                 3. Salir
   Entradas : opción del menú, número de filas, número de términos.
   Salidas
   : figura en pantalla o resultado de la serie.

 */

#include <stdio.h>

#define OPCION_FIGURA 1
#define OPCION_SERIE  2
#define OPCION_SALIR  3
#define MAX_TERMINOS  15   /* n^n con n=16 desborda unsigned long long */

/* Pide un entero en [min, max] y repite hasta que sea válido */
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
            while (getchar() != '\n');   /* limpia el búfer */
            valor = min - 1;
        }
        if (valor < min || valor > max)
            printf("Valor no valido (%d a %d).\n", min, max);
    } while (valor < min || valor > max);

    return valor;
}

/* Calcula base^exp con enteros (evita errores de pow con decimales) */
static unsigned long long potencia(int base, int exp)
{
    unsigned long long r = 1;
    int k;

    for (k = 0; k < exp; k++)
        r *= base;
    return r;
}

/* Dibuja un cuadrado hueco de 1 con el número de filas indicado */
static void dibujarFigura(int filas)
{
    int f, c;

    for (f = 1; f <= filas; f++)
    {
        for (c = 1; c <= filas; c++)
        {
            if (f == 1 || f == filas || c == 1 || c == filas)
                printf("1 ");
            else
                printf("  ");
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
