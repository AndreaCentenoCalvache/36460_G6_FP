//Problema  1.16. Número perfecto//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, d, suma = 0;
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);
    for (d = 1; d <= n / 2; d++) {
        if (n % d == 0) suma += d;
    }
    if (suma == n && n > 1) printf("%d es perfecto\n", n);
    else                    printf("%d no es perfecto\n", n);
    return 0;
}
