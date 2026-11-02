//Problema 1.14. MCD (algoritmo de Euclides)//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int a, b, r;
    printf("Ingrese dos enteros positivos: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("MCD = %d\n", a);
    return 0;
}
