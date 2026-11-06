// Ejercicio 3
// Realizado por: Abigail Quinga

#include <stdio.h>

int main() { //Inicio
    int x, y; //El usuario ingresara datos enteros
    //Define los valores de x y y
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);
    // if primera condicion a revisar
    if (y == 0) { // si y es 0 no se puede dividir
        printf("No es posible dividir entre cero\n");
    // else if solo se revisa si el if de arriba no se cumplio
    } else if (x % y == 0) {  // si el resto es 0 si es divisible
        printf("%d es divisible por %d\n", x, y);
    } else { // else es lo que pasa cuando ninguna condicion de arriba se cumplio
        printf("%d no es divisible por %d\n", x, y); // si el resto no es 0, entonces no es divisible
    }
} //Fin
