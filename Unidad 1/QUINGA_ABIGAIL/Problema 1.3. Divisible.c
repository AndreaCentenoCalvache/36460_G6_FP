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
    // else if solo se revisa si el if no se cumplio
    } else if (x % y == 0) {  
        printf("%d es divisible por %d\n", x, y);
    } else { // else se ocupa si ninguna condicion de arriba se cumplio
        printf("%d no es divisible por %d\n", x, y); 
    }
} //Fin
