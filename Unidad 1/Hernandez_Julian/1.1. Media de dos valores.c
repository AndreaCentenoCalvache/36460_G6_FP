/* Problema 1.1: Media de dos valores
   Enunciado: leer dos numeros por teclado e imprimir su media.
   Autor: Julián Hernández */

#include <stdio.h>

int main(void)
{
    float primerNumero;
    float segundoNumero;
    float media;

    printf("Ingrese el primer numero: ");
    if (scanf("%f", &primerNumero) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    printf("Ingrese el segundo numero: ");
    if (scanf("%f", &segundoNumero) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    /* La media es la suma de los dos valores dividida entre 2 */
    media = (primerNumero + segundoNumero) / 2;

    printf("La media es: %.2f\n", media);

    return 0;
}
