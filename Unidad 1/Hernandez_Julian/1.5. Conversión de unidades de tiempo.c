#include <stdio.h>

int main() {
    int c, dias, resto, horas, minutos, segundos;

    printf("Ingrese el numero de segundos: ");
    scanf("%d", &c);

    dias = c / 86400;
    resto = c % 86400;
    horas = resto / 3600;
    resto = resto % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d dias, %d horas, %d minutos, %d segundos\n", dias, horas, minutos, segundos);

    return 0;
}
