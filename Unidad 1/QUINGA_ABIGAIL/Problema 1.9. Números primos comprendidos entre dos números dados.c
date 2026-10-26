#include <stdio.h>

int main() {
    int m, p, aux, n, i, esPrimo, cont = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &m);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &p);

    if (m > p) {
        aux = m;
        m = p;
        p = aux;
    }

    for (n = m; n <= p; n++) {
        if (n >= 2) {
            esPrimo = 1;
            i = 2;
            while (i * i <= n && esPrimo) {
                if (n % i == 0) {
                    esPrimo = 0;
                }
                i++;
            }
            if (esPrimo) {
                printf("%d ", n);
                cont++;
            }
        }
    }

    if (cont == 0) {
        printf("No hay primos en el rango");
    }
    printf("\n");
    return 0;
}
