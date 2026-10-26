#include <stdio.h>

int main() {
    double h, suma = 0, maximo = 0, minimo = 0, media;
    int cont = 0;

    printf("Ingrese una altura (negativa para finalizar): ");
    scanf("%lf", &h);

    while (h >= 0) {
        if (cont == 0) {
            maximo = h;
            minimo = h;
        } else {
            if (h > maximo) maximo = h;
            if (h < minimo) minimo = h;
        }
        suma += h;
        cont++;

        printf("Ingrese una altura (negativa para finalizar): ");
        scanf("%lf", &h);
    }

    if (cont > 0) {
        media = suma / cont;
        printf("Media: %.2f\n", media);
        printf("Maximo: %.2f\n", maximo);
        printf("Minimo: %.2f\n", minimo);
    } else {
        printf("No se validaron las alturas ingresadas\n");
    }
    return 0;
}
