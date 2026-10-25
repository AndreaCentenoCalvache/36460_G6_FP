// Problema 1.1. Media de dos valores //
// Nombre: Andrea Centeno //
// NRC: 36460 //

/*
// Seudocódigo //
Inicio
    Leer a, b
    media <- (a + b) / 2
    Escribir media
Fin
*/

//CÓDIGO//
#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    double a, b, media;

    // Leer a, b
    cout << "Ingrese el primer valor (a): ";
    cin >> a;
    cout << "Ingrese el segundo valor (b): ";
    cin >> b;

    // Calcular la media
    media = (a + b) / 2.0;

    // Escribir media
    cout << "La media es: " << media << endl;

    return 0;
}

//Problema 1.2. Valor absoluto de x al cubo//
/*
//Seudocódigo//

Inicio
    Leer x
    Si x < 0 Entonces
        ax <- -x
    Sino
        ax <- x
    FinSi
    Escribir ax * ax * ax
Fin
*/

//Código C++//
void p1_2() {
    double x;
    double ax; // Declaramos ax aquí

    cout << "Ingrese un numero: ";
    cin >> x;

    // Esto hace exactamente lo mismo que tu Si/Entonces del pseudocódigo
    if (x < 0) {
        ax = -x;
    } else {
        ax = x;
    }

    cout << "|x|^3 = " << ax * ax * ax << endl;
}

