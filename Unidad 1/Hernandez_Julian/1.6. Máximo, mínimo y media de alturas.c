#include <stdio.h>

int main() {
    float h, max, min, suma, media;
    int cont;

    printf("Ingrese alturas. Escriba un numero negativo para terminar.\n");
    scanf("%f", &h);

    if (h >= 0) {
        max = h;
        min = h;
        suma = 0;
        cont = 0;

        while (h >= 0) {
            suma = suma + h;
            cont = cont + 1;

            if (h > max) {
                max = h;
            }
            if (h < min) {
                min = h;
            }

            scanf("%f", &h);
        }

        media = suma / cont;

        printf("Media: %.2f\n", media);
        printf("Maxima: %.2f\n", max);
        printf("Minima: %.2f\n", min);
    } else {
        printf("No ingreso ninguna altura valida\n");
    }

    return 0;
}
