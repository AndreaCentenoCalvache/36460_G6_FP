#include <stdio.h>

int main() {
    int a, b, aux;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    while (b != 0) {
        aux = b;
        b = a % b;
        a = aux;
    }

    printf("MCD = %d\n", a);

    return 0;
}
