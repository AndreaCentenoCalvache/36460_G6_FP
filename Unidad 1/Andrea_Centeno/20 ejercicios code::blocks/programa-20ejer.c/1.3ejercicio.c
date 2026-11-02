//Problema 1.3. Divisible//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Ingrese dos enteros: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("No se puede dividir entre cero\n");
    } else if (a % b == 0) {
        printf("%d es divisible entre %d\n", a, b);
    } else {
        printf("%d NO es divisible entre %d\n", a, b);
    }
    return 0;
}
