//Problema 1.4. Intervalo//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    double x;
    printf("Ingrese un numero: ");
    scanf("%lf", &x);
    if (x >= 0 && x <= 10) {
        printf("Pertenece al intervalo [0, 10]\n");
    } else {
        printf("No pertenece al intervalo [0, 10]\n");
    }
    return 0;
}
