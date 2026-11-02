//Problema 1.6. Máximo, mínimo y media de alturas//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    float h, suma = 0, max = 0, min = 0;
    int cont = 0;

    printf("Ingrese alturas (negativa para terminar):\n");
    scanf("%f", &h);
    while (h >= 0) {
        if (cont == 0) {
            max = h;
            min = h;
        } else {
            if (h > max) max = h;
            if (h < min) min = h;
        }
        suma += h;
        cont++;
        scanf("%f", &h);
    }

    if (cont == 0) {
        printf("No se ingresaron alturas\n");
    } else {
        printf("Media = %.2f\nMaximo = %.2f\nMinimo = %.2f\n",
               suma / cont, max, min);
    }
    return 0;
}
