//Problema  1.17. Decimal a binario (sin arreglos)//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, p = 1;
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);
    while (p * 2 <= n) {
        p *= 2;
    }
    while (p >= 1) {
        if (n >= p) {
            printf("1");
            n -= p;
        } else {
            printf("0");
        }
        p /= 2;
    }
    printf("\n");
    return 0;
}
