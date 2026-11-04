//Problema 1.11. Serie de Fibonacci//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, i;
    long long ant = 0, act = 1, sig;  /* termino anterior, actual y siguiente */

    printf("Ingrese n (>= 1): ");
    scanf("%d", &n);

    /* Estructura repetitiva: for (una vuelta por cada termino) */
    for (i = 1; i <= n; i++) {
        printf("%lld ", ant);
        sig = ant + act;  /* cada termino es la suma de los dos anteriores */
        ant = act;
        act = sig;
    }
    printf("\n");
    return 0;
}
