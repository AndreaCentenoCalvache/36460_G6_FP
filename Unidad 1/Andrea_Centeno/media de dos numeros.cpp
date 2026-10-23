#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//* 1.1 Media de dos valores */
void p1_1(void) {
    double a, b;

    printf("Ingrese el primer numero: ");
    scanf("%lf", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &b);

    // Agregamos .0 al 2 para asegurar operaciones limpias con decimales
    printf("La media es: %.2f\n", (a + b) / 2.0);
}

// ESTA ES LA FUNCIÓN QUE TE FALTA PARA PODER DEPURAR Y EJECUTAR
int main(void) {
    p1_1(); // Llama a tu función de la imagen
    return 0;
}
