//Problema 1.9. Números primos entre dos números dados//
/*
//Seudocódigo//
Inicio
  Leer a, b
  Si a > b Entonces intercambiar(a, b)
  hay <- Falso
  Para i <- a Hasta b Hacer
    Si esPrimo(i) Entonces
      Escribir i
      hay <- Verdadero
    FinSi
  FinPara
  Si hay = Falso Entonces Escribir "(ninguno)"
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
void p1_9() {
    int a, b;
    cout << "Ingrese el primer entero: ";
    cin >> a;
    cout << "Ingrese el segundo entero: ";
    cin >> b;
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    cout << "Primos entre " << a << " y " << b << ": ";
    bool hay = false;
    for (int i = a; i <= b; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
            hay = true;
        }
    }
    if (!hay) cout << "(ninguno)";
    cout << endl;
}
int main() {
    p1_9();
    return 0;
}
