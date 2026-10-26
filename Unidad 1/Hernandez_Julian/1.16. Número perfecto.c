#include <stdio.h>

int main() {
    int n, suma, d;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    suma = 0;
    for (d = 1; d <= n / 2; d++) {
        if (n % d == 0) {
            suma = suma + d;
        }
    }

    if (suma == n) {
        printf("Es un numero perfecto\n");
    } else {
        printf("No es perfecto\n");
    }

    return 0;
}

