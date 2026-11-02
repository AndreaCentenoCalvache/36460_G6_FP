//Problema 1.12.Suma de dígitos//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, suma = 0;
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    printf("Suma de digitos = %d\n", suma);
    return 0;
}
