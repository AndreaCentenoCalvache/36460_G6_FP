// Ejercicio 2
// Realizado por: Abigail Quinga
#include <stdio.h> //Libreria

int main() { //Inicio
    double x, absoluto, resultado;
    //Define el valor de x
    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);
    //Saco el valos absoluto
    if (x < 0) {
        absoluto = -x;
    } else {
        absoluto = x;
    }
    //Elevar al cubo
    resultado = absoluto * absoluto * absoluto;
    //Resultado final
    printf("Resultado es: %.2f\n", resultado);
} //Fin
