/* Problema 1.2: Valor absoluto de x al cubo
   Enunciado: leer un numero por teclado y escribir por pantalla |x|^3.
   Elaborado por: Julián Hernández */

#include <stdio.h>

int main(void)
{
    float x;
    float valorAbsoluto;
    float resultado;

    printf("Ingrese un numero: ");
    if (scanf("%f", &x) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    /* Si x es negativo, se cambia el signo para obtener |x| */
    if (x < 0) {
        valorAbsoluto = -x;
    } else {
        valorAbsoluto = x;
    }

    /* |x|^3 = |x| * |x| * |x| */
    resultado = valorAbsoluto * valorAbsoluto * valorAbsoluto;

    printf("|%.2f|^3 = %.2f\n", x, resultado);

    return 0;
}
