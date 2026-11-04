/* Problema 1.3: Divisible
   Enunciado: leer dos numeros enteros por teclado y determinar si el
   primero es divisible por el segundo. Se muestra el resultado por pantalla.
   Elaborado por: Julián Hernández */

#include <stdio.h>

int main(void)
{
    int dividendo;
    int divisor;
    int resto;

    printf("Ingrese el primer numero entero: ");
    if (scanf("%d", &dividendo) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    printf("Ingrese el segundo numero entero: ");
    if (scanf("%d", &divisor) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    /* No se puede dividir entre cero */
    if (divisor == 0) {
        printf("Error: no se puede dividir entre cero.\n");
        return 1;
    }

    /* Si el resto es 0, la division es exacta */
    resto = dividendo % divisor;

    if (resto == 0) {
        printf("%d es divisible por %d\n", dividendo, divisor);
    } else {
        printf("%d no es divisible por %d\n", dividendo, divisor);
    }

    return 0;
}
