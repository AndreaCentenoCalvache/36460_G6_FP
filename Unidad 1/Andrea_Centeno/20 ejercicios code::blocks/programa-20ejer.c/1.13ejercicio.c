//Problema 1.13. Número capicúa//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, original;
    long long inv = 0;
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    if (inv == original) printf("%d es capicua\n", original);
    else                 printf("%d no es capicua\n", original);
    return 0;
}
