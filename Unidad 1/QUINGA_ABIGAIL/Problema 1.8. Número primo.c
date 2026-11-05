// Ejercicio 8
// Realizado por: Abigail Quinga
#include <stdio.h>

int main() { //Inicio
    int n, i;
    int esPrimo;
//Define el numero
    printf("Ingrese un entero mayor que 1: ");
    scanf("%d", &n);
// if es la primera condicion que se revisa
    if (n <= 1) { //n es menor que uno, no se realiza
        printf("Error: n debe ser mayor que 1\n");
 // else es lo que pasa cuando la condicion de arriba no se cumplio
    } else {
        esPrimo = 1;
        i = 2;
// while se repite mientras i por i sea menor o igual a n y es primo
        while (i * i <= n && esPrimo) {
// if si n se divide exacto para i ya no es primo
            if (n % i == 0) {
                esPrimo = 0;
            }
            i++; //Suma un 1 a la variable
        }
// if es la primera condicion que se revisa
        if (esPrimo) {
            printf("%d es primo\n", n);
// else es lo que pasa cuando la condicion de arriba no se cumplio
        } else {
            printf("%d no es primo\n", n);
        }
    }
} //Fin
