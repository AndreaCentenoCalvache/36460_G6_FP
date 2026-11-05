// Ejercicio 2
// Realizado por: Abigail Quinga
#include <stdio.h> //Libreria

int main() { //Inicio
    double x, absoluto, resultado;
    //Define el valor de x
    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);
    //Saco el valos absoluto
    //El if es la condicion para la toma de decisiones, si es V ejecuta y si es F ignora este codigo
    if (x < 0) { 
        absoluto = -x; //Si x es negativo, cambia de signo a positivo por el valor absoluto
    // El else se ejecuta unicamente cuando la condicion del if es F   
    } else {
        absoluto = x;// Si es positivo queda igual
    }
    //Elevar al cubo
    resultado = absoluto * absoluto * absoluto;
    //Resultado final
    printf("Resultado es: %.2f\n", resultado);
} //Fin
