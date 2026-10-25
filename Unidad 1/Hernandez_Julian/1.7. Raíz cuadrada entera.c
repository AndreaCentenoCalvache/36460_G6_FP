#include <stdio.h>

int main() {
    int N, i, R;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("El numero debe ser positivo\n");
    } else {
        i = 1;
        while (i * i <= N) {
            i = i + 1;
        }
        R = i - 1;
        printf("La raiz entera de %d es %d\n", N, R);
    }

    return 0;
}
