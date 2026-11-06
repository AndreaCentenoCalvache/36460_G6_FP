// Ejercicio 4
// Realizado por: Abigail Quinga

#include <stdio.h> //Libreria 

int main() { //Inico
    double x;
//Define el numero x
    printf("Ingrese un numero: ");
    scanf("%lf", &x);
// if primera condicion a revisar
    if (x >= 0 && x <= 10) { // El 0 debe de estar entre 0 y 10
        printf("El numero pertenece al intervalo\n");
 // else se cumple si if no se cumplio
    } else { 
        printf("El numero no pertenece al intervalo\n");
    }
} //Fin
