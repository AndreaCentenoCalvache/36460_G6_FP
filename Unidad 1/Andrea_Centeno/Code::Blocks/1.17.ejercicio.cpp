//Problema 1.17. Conversión de decimal a binario//
/*
//Seudocódigo//
Inicio
Leer n
potencia <- 1
Mientras potencia * 2 <= n Hacer
potencia <- potencia * 2
FinMientras
Mientras potencia > 0 Hacer
Si n >= potencia Entonces
Escribir 1
n <- n - potencia
Sino
Escribir 0
FinSi
potencia <- potencia DIV 2
FinMientras
Fin
*/
//Codigo//
#include <iostream>
using namespace std;
void p1_17() {
    long long n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: debe ser positivo." << endl;
        return;
    }
    long long potencia = 1;
    while (potencia * 2 <= n) {
        potencia *= 2;
    }
    cout << "Binario: ";
    while (potencia > 0) {
        if (n >= potencia) {
            cout << 1;
            n -= potencia;
        } else {
            cout << 0;
        }
        potencia /= 2;
    }
    cout << endl;
}
int main() {
    p1_17();
    return 0;
}
