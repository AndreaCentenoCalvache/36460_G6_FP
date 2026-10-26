#include <stdio.h>

int main(void)
{
    int n, r;
    long long bin, pot;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: ingrese un entero positivo\n");
    } else {
        bin = 0;
        pot = 1;
        while (n > 0) {
            r = n % 2;
            bin = bin + r * pot;
            pot = pot * 10;
            n = n / 2;
        }
        printf("En binario: %lld\n", bin);
    }
    return 0;
}
