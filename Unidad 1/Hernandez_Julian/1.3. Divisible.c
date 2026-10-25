#include <stdio.h>

int main() {
    int x, y, resto;

    printf("Ingrese el primer número: ");
    scanf("%d", &x);
    printf("Ingrese el segundo número: ");
    scanf("%d", &y);

    if (y == 0) {
        printf("Error: no se puede dividir entre cero\n");
    } else {
        resto = x % y;
        if (resto == 0) {
            printf("%d es divisible por %d\n", x, y);
        } else {
            printf("%d no es divisible por %d\n", x, y);
        }
    }
    return 0;
}
