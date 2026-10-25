#include <stdio.h>

int main() {
    float n;

    printf("Ingrese un numero: ");
    scanf("%f", &n);

    if (n >= 0 && n <= 10) {
        printf("%.2f pertenece al intervalo [0,10]\n", n);
    } else {
        printf("%.2f no pertenece al intervalo [0,10]\n", n);
    }

    return 0;
}

