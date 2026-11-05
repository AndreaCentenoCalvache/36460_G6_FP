// Ejercicio 7
// Realizado por: Abigail Quinga
#include <stdio.h> //Libreria

int main() { //Inico
    int N, i, R;
//Define el numero 
    printf("Ingrese un entero positivo: ");
    scanf("%d", &N);
// if es la primera condicion que se revisa
    if (N <= 0) {//Si es menor o igual que cero, no se realiza
        printf("El numero debe ser entero positivo mayor que cero\n");
// else es lo que pasa cuando la condicion de arriba no se cumplio    
    } else {
        i = 1;
//while se repetira si i por i es menor o igual que N
        while (i * i <= N) {
            i++; //Aumento de 1
        }
    // R es raiz entera
        R = i - 1;
        printf("La raiz cuadrada entera de %d es: %d\n", N, R);
    }
}//Fin
