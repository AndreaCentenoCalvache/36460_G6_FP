#include <stdio.h>

int main(void)
{
    int n, d, suma;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: n debe ser positivo\n");
    } else {
        suma = 0;
        for (d = 1; d <= n - 1; d++) {
            if (n % d == 0)
                suma = suma + d;
        }
        if (suma == n)
            printf("%d es perfecto\n", n);
        else
            printf("%d no es perfecto\n", n);
    }
    return 0;
}
