/* Problema 1.15: Año bisiesto
   Enunciado: leer un año y determinar si es bisiesto.
   Un año es bisiesto si es divisible entre 4, excepto los divisibles
   entre 100, que solo lo son si también son divisibles entre 400.
   Elaborado por: Julián Hernández */

#include <stdio.h>

int main(void)
{
    int anio;

    printf("Ingrese un anio: ");
    if (scanf("%d", &anio) != 1 || anio <= 0) {
        printf("Entrada no valida: debe ser un entero positivo.\n");
        return 1;
    }

    /* Divisible entre 4 y no entre 100, o divisible entre 400 */
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("%d es bisiesto\n", anio);
    } else {
        printf("%d no es bisiesto\n", anio);
    }

    return 0;
}
