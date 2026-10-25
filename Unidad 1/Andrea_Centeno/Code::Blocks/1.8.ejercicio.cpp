//problema 1.8.Función esPrimo(n)//
/*
//Seudocodigo//
  Si n < 2 Entonces Retornar Falso
  d <- 2
  Mientras d * d <= n Hacer
    Si n MOD d = 0 Entonces Retornar Falso
    d <- d + 1
  FinMientras
  Retornar Verdadero
FinFunción
Inicio
  Leer n
  Si n <= 1 Entonces
    Escribir "Error: debe ser mayor que 1"
  Sino
    Si esPrimo(n) Entonces
      Escribir "n es primo"
    Sino
      Escribir "n NO es primo"
    FinSi
  FinSi
Fin
*/
//Codigo//
#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int d = 2; (long long)d * d <= n; d++) {
        if (n % d == 0) return false;
    }
    return true;
}
void p1_8() {
    int n;
    cout << "Ingrese un entero mayor que 1: ";
    cin >> n;
    if (n <= 1) {
        cout << "Error: el numero debe ser mayor que 1." << endl;
    } else if (esPrimo(n)) {
        cout << n << " es primo" << endl;
    } else {
        cout << n << " NO es primo" << endl;
    }
}

int main() {
    p1_8();
    return 0;
}
