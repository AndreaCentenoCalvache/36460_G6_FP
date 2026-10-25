//Problema 1.12. Suma de dígitos//
/*
//Seudocódigo//
Inicio
Leer n
suma <- 0
Mientras n > 0 Hacer
suma <- suma + (n MOD 10)
n <- n DIV 10
FinMientras
Escribir suma
Fin
*/
//Codigo//
#include <iostream>
using namespace std;
void p1_12() {
    long long n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: debe ser positivo." << endl;
        return;
    }
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    cout << "La suma de los digitos es: " << suma << endl;
}
int main() {
    p1_12();
    return 0;
}
