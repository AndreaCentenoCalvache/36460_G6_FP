//Problema 1.18. Triángulo de asteriscos //
/*
//Seudocódigo//
Inicio
Leer n
Para i <- 1 Hasta n Hacer
Para j <- 1 Hasta i Hacer
Escribir "*"
FinPara
Escribir salto de línea
FinPara
Fin
*/
//Codigo//
#include <iostream>
using namespace std;
void p1_18() {
    int n;
    cout << "Ingrese n (n >= 1): ";
    cin >> n;
    if (n < 1) {
        cout << "Error: n debe ser al menos 1." << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    p1_18();
    return 0;
}
