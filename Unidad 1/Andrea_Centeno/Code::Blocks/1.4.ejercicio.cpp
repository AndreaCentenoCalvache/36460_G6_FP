//Problema 1.4. Intervalo//
/*
//Seudocódigo//
Inicio
  Leer x
  Si (x >= 0) Y (x <= 10) Entonces
    Escribir "x pertenece a [0, 10]"
  Sino
    Escribir "x NO pertenece a [0, 10]"
  FinSi
Fin
*/
#include <iostream>
using namespace std;

// ----- PROBLEMA 1.4 -----
void p1_4() {
    double x;
    cout << "Ingrese un numero: ";
    cin >> x;

    if (x >= 0 && x <= 10) {
        cout << x << " pertenece al intervalo" << endl;
    } else {
        cout << x << " NO pertenece al intervalo" << endl;
    }
}

// ----- FUNCIÓN PRINCIPAL OBLIGATORIA -----
int main() {
    p1_4(); // Ejecuta el problema 1.4
    return 0;
}

