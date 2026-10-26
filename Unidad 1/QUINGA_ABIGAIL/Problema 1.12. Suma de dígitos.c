#include <stdio.h>

int main(void)
{
    int n, dig, suma;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: ingrese un entero positivo\n");
    } else {
        suma = 0;
        while (n > 0) {
            dig = n % 10;
            suma = suma + dig;
            n = n / 10;
        }
        printf("Suma de digitos: %d\n", suma);
    }
    return 0;
}
