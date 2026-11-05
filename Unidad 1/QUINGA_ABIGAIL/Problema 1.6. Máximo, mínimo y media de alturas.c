// Ejercicio 6
// Realizado por: Abigail Quinga

#include <stdio.h> //Libreria

int main() { //Inicio
    double h, suma = 0, maximo = 0, minimo = 0, media;
    int cont = 0;
//Define la primera altura
    printf("Ingrese una altura (negativa para finalizar): ");
    scanf("%lf", &h);
//while se va a repetir si h es mayor igual a 0
    while (h >= 0) {
 // if es la primera condicion que se revisa
        if (cont == 0) {// La primera altura es el maximo y minimo
            maximo = h;
            minimo = h;
// else es lo que pasa cuando no es primera altura
        } else {
            if (h > maximo) maximo = h;
            if (h < minimo) minimo = h;
        }
        suma += h; //Suma de alturas
        cont++; //Contador 
// Define otra altura 
        printf("Ingrese una altura (negativa para finalizar): ");
        scanf("%lf", &h);
    }
// if es la primera condicion que se revisa
    if (cont > 0) {
        media = suma / cont; //Sacar la media
//Resultados
        printf("Media: %.2f\n", media);
        printf("Maximo: %.2f\n", maximo);
        printf("Minimo: %.2f\n", minimo);
// else es lo que pasa cuando la condicion de arriba no se cumplio
    } else { 
        //Si no hay alturas ingresadas, entonces no se valida nda
        printf("No se validaron las alturas ingresadas\n");
    }
}//Fin
