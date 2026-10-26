#include <stdio.h>

int main() {
    int N, i, R;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("El numero debe ser entero positivo mayor que cero\n");
    } else {
        i = 1;
        while (i * i <= N) {
            i++;
        }
        R = i - 1;
        printf("La raiz cuadrada entera de %d es: %d\n", N, R);
    }
    return 0;
}
