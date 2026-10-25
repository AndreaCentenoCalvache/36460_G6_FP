//Problema 1.14. Máximo común divisor (algoritmo de Euclides)//
/*
//Seudocódigo//
Inicio
Leer a, b
Mientras b <> 0 Hacer
resto <- a MOD b
a <- b
b <- resto
FinMientras
Escribir a
Fin
*/

//Codigo//
#include <iostream>
using namespace std;
void p1_14() {
    int a, b;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "Error: ambos deben ser positivos." << endl;
        return;
    }
    int x = a, y = b;
    while (y != 0) {
        int resto = x % y;
        x = y;
        y = resto;
    }
    cout << "MCD(" << a << ", " << b << ") = " << x << endl;
}
int main() {
    p1_14();
    return 0;
}
