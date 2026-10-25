// PROBLEMA 1.3.Divisible//
/*
//Seudocodigo//
Inicio
  Leer a, b
  Si b = 0 Entonces
    Escribir "Error: division entre cero"
  Sino
    Si a MOD b = 0 Entonces
      Escribir "a es divisible entre b"
    Sino
      Escribir "a NO es divisible entre b"
    FinSi
  FinSi
Fin
*/
#include <iostream>
using namespace std;
void p1_3() {
    int a, b;
    cout << "Ingrese el primer entero: ";
    cin >> a;
    cout << "Ingrese el segundo entero: ";
    cin >> b;

    if (b == 0) {
        cout << "Error: no se puede dividir entre cero." << endl;
    } else if (a % b == 0) {
        cout << a << " es divisible entre " << b << endl;
    } else {
        cout << a << " NO es divisible entre " << b << endl;
    }
}

int main() {
    p1_3(); // Ejecuta el problema 1.3
    return 0;
}
