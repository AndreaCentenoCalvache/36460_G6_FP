#include <stdio.h>

int main() {
    int c, dias, horas, minutos, segundos, resto;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &c);

    if (c < 0) {
        printf("El numero de segundos debe ser mayor o igual a cero\n");
    } else {
        dias = c / 86400;
        resto = c % 86400;
        horas = resto / 3600;
        resto = resto % 3600;
        minutos = resto / 60;
        segundos = resto % 60;

        printf("Dias: %d\n", dias);
        printf("Horas: %d\n", horas);
        printf("Minutos: %d\n", minutos);
        printf("Segundos: %d\n", segundos);
    }
    return 0;
}
