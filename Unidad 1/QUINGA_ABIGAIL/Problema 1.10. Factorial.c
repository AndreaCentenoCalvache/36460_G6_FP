/* Ejercicio 10 */
/* Realizado por: Abigail Quinga */
#include <stdio.h>
/* Si ingresa un numero mayor que 21, existira un desbordamiento*/
int main() {
    int n, i; /* Datos que el usuario ingresara, enteros*/
    unsigned long long f; /* Permite el ingreso de un factorial mayor, este caso solo hasta el 21 para que no exista desbordamiento*/

    printf("Ingrese un entero n >= 0: ");
    scanf("%d", &n); /* Lee lo que ingrese el usuario y lo guarda*/

    if (n < 0) {
        printf("Error: el factorial no existe para numeros negativos\n");
    } else {
        f = 1; /* Factorial es 1, porque con 0 el resultado nos daria 0 */
        for (i = 2; i <= n; i++) {
            f = f * i;
        }
        printf("%d! = %llu\n", n, f);
    }
    return 0; /* El programa termino bien, sin errores*/
}
