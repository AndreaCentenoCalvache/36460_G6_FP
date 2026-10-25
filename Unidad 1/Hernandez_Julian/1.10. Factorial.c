#include <stdio.h>

int main() {
    int n, i;
    long long fact;

    printf("Ingrese un numero entero mayor o igual a cero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El numero debe ser mayor o igual a cero\n");
    } else {
        fact = 1;
        i = 1;
        while (i <= n) {
            fact = fact * i;
            i = i + 1;
        }
        printf("%d! = %lld\n", n, fact);
    }

    return 0;
}
