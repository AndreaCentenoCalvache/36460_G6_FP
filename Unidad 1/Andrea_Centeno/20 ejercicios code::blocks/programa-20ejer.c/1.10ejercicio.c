//Problema 1.10. Factorial//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long f = 1;  /* acumulador del producto */

    printf("Ingrese n (>= 0): ");
    scanf("%d", &n);

    /* Estructura de control: if / else
       El factorial no esta definido para numeros negativos */
    if (n < 0) {
        printf("El factorial no esta definido para negativos\n");
    } else {
        /* Estructura repetitiva: for (multiplica de 2 hasta n) */
        for (i = 2; i <= n; i++) {
            f *= i;
        }
        printf("%d! = %llu\n", n, f);
    }
    return 0;
}
