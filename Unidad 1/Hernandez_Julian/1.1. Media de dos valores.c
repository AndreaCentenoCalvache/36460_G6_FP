#include <stdio.h>

int main() {
    float a, b, media;

    printf("Ingrese el primer número: ");
    scanf("%f", &a);
    printf("Ingrese el segundo número: ");
    scanf("%f", &b);

    media = (a + b) / 2;

    printf("La media es: %.2f\n", media);
    return 0;
}

