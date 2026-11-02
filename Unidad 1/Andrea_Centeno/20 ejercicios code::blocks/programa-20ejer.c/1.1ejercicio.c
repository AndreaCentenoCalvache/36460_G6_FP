//Problema 1.1. Media de dos valores//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    float a, b, media;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &a, &b);
    media = (a + b) / 2;
    printf("Media = %.2f\n", media);
    return 0;
}
