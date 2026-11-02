//Problema 1.11. Serie de Fibonacci//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, i;
    long long ant = 0, act = 1, sig;
    printf("Ingrese n (>= 1): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%lld ", ant);
        sig = ant + act;
        ant = act;
        act = sig;
    }
    printf("\n");
    return 0;
}
