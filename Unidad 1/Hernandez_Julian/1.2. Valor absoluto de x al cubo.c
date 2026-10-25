#include <stdio.h>

int main() {
    float x, resultado;

    printf("Ingrese un número: ");
    scanf("%f", &x);

    if (x >= 0) {
        resultado = x * x * x;
    } else {
        resultado = (-x) * (-x) * (-x);
    }

    printf("|x|^3 = %.2f\n", resultado);
    return 0;
}
