//Ejercicio 1
//Realizado por: Abigail Quinga
#include <stdio.h>

int main (){ // Inicio
    int m, n; //El usuario ingresara datos enteros
    float media; // Dato con decimales
    //Define el primer numero
    printf("Ingrese el primer numero: ");
    scanf("%d",&m);
    //Define el segundo numero
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n);
    //Saco la media
    media = (m + n) / 2.0; //Usar 2.0 para mayor precision
    printf("La media es: %.2f\n", media); //Se muestra el resultado
} //Fin

