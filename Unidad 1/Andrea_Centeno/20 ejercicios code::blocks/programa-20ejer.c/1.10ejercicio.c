//Problema 1.10. Factorial//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long f = 1;
    printf("Ingrese n (>= 0): ");
    scanf("%d", &n);
    if (n < 0) {
        printf("El factorial no esta definido para negativos\n");
    } else {
        for (i = 2; i <= n; i++) {
            f *= i;
        }
        printf("%d! = %llu\n", n, f);
    }
    return 0;
}
