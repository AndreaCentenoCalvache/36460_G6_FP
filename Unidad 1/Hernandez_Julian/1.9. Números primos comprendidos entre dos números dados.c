#include <stdio.h>

int main() {
    int a, b, num, d, es_primo;

    printf("Ingrese el limite inferior: ");
    scanf("%d", &a);
    printf("Ingrese el limite superior: ");
    scanf("%d", &b);

    if (a < 2) {
        a = 2;
    }

    printf("Numeros primos entre %d y %d:\n", a, b);

    num = a;
    while (num <= b) {
        es_primo = 1;
        d = 2;

        while (d * d <= num && es_primo == 1) {
            if (num % d == 0) {
                es_primo = 0;
            }
            d = d + 1;
        }

        if (es_primo == 1) {
            printf("%d\n", num);
        }

        num = num + 1;
    }

    return 0;
}
