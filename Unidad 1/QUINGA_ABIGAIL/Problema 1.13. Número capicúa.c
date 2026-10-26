#include <stdio.h>

int main(void)
{
    int n, orig, inv, dig;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: numero entero positivo\n");
    } else {
        orig = n;
        inv = 0;
        while (orig > 0) {
            dig = orig % 10;
            inv = inv * 10 + dig;
            orig = orig / 10;
        }
        if (inv == n)
            printf("%d es capicua\n", n);
        else
            printf("%d no es capicua\n", n);
    }
    return 0;
}
