//Problema 1.11. Serie de Fibonacci //
/*
//Seudocódigo//
Inicio
Leer n
anterior <- 0
actual <- 1
Para i <- 1 Hasta n Hacer
Escribir anterior
siguiente <- anterior + actual
anterior <- actual
actual <- siguiente
FinPara
Fin
*/

//Codigo//
#include <iostream>

using namespace std;

void p1_11() {
    int n;
    cout << "Ingrese n (n >= 1): ";
    cin >> n;
    if (n < 1) {
        cout << "Error: n debe ser al menos 1." << endl;
        return;
    }
    long long anterior = 0, actual = 1, siguiente;
    for (int i = 1; i <= n; i++) {
        cout << anterior << " ";
        siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }
    cout << endl;
}

int main() {
    p1_11();
    return 0;
}
