#include <stdio.h>

int main() {
    int original, n, invertido, digito;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &original);

    n = original;
    invertido = 0;

    while (n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }

    if (original == invertido) {
        printf("Es capicua\n");
    } else {
        printf("No es capicua\n");
    }

    return 0;
}

