//Problema 1.5. Conversión de unidades de tiempo//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    long c, dias, horas, minutos, segundos, resto;
    printf("Ingrese los segundos: ");
    scanf("%ld", &c);
    dias = c / (24 * 60 * 60);
    resto = c % (24 * 60 * 60);
    horas = resto / (60 * 60);
    resto = resto % (60 * 60);
    minutos = resto / 60;
    segundos = resto % 60;
    printf("%ld dias, %ld horas, %ld minutos, %ld segundos\n",
           dias, horas, minutos, segundos);
    return 0;
}
