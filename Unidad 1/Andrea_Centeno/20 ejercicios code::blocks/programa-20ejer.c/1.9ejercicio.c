//Problema 1.9. Primos entre dos números//
//Nombre:Andrea Centeno//
//NRC:36460//
#include <stdio.h>

int main(void) {
    int a, b, n, d, primo, tmp;
    printf("Ingrese dos enteros: ");
    scanf("%d %d", &a, &b);
    if (a > b) { tmp = a; a = b; b = tmp; }

    for (n = a; n <= b; n++) {
        if (n > 1) {
            primo = 1;
            d = 2;
            while (d * d <= n && primo) {
                if (n % d == 0) primo = 0;
                d++;
            }
            if (primo) printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}
