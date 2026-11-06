#include <stdio.h>

int main(void)
{
    int n, k, ant, act, sig;

    printf("Ingrese n (n >= 1): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: n debe ser >= 1\n");
    } else {
        ant = 0;
        act = 1;
        for (k = 1; k <= n; k++) {
            printf("%d ", ant);
            sig = ant + act;
            ant = act;
            act = sig;
        }
        printf("\n");
    }
    return 0;
}
