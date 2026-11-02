//Problema 1.2. Valor absoluto de x al cubo//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    double x, r;
    printf("Ingrese x: ");
    scanf("%lf", &x);
    if (x < 0) {
        x = -x;
    }
    r = x * x * x;
    printf("|x|^3 = %.4f\n", r);
    return 0;
}
