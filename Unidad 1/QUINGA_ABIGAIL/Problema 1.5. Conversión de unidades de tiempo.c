// Ejercicio 5
// Realizado por: Abigail Quinga

#include <stdio.h> //Libreria

int main() { //Inicio
    int c, dias, horas, minutos, segundos;
//Define la cantidad de segundos
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &c);
// if primera condicion a revisar
    if (c < 0) { // Si c es menor que cero no se pueden convertir 
        printf("El numero de segundos debe ser mayor o igual a cero\n");
// else secumple si if no se cumplio
    } else { //Si c es mayor entonces se puede convertir
// Sacamos los dias y le resto al total
        dias = c / 86400; 
        c = c - dias * 86400; 
//Sacamos las horas y le resto al total
        horas = c / 3600;
        c = c - horas * 3600;
// Sacamos los minutos y los segundos que quedan
        minutos = c / 60;
        segundos = c - minutos * 60;
//Resultados
        printf("Dias: %d\n", dias);
        printf("Horas: %d\n", horas);
        printf("Minutos: %d\n", minutos);
        printf("Segundos: %d\n", segundos);
    }
} //Fin
