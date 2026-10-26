#include <stdio.h>
#include <math.h>

int main() {
    double x, resultado;

    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);

    resultado = pow(fabs(x), 3);
    printf("Resultado es: %.2f\n", resultado);
    return 0;
}
