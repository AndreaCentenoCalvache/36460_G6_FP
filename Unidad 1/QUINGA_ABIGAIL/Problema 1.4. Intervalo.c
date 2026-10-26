#include <stdio.h>

int main() {
    double x;

    printf("Ingrese un numero: ");
    scanf("%lf", &x);

    if (x >= 0 && x <= 10) {
        printf("El numero pertenece al intervalo\n");
    } else {
        printf("El numero no pertenece al intervalo\n");
    }
    return 0;
}
