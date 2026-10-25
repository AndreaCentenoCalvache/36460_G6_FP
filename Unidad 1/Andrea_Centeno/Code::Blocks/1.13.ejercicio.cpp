// Problema 1.13. Número capicúa//
/*
//Seudocódigo//
Inicio
Leer n
copia <- n
invertido <- 0
Mientras copia > 0 Hacer
invertido <- invertido * 10 + (copia MOD 10)
copia <- copia DIV 10
FinMientras
Si invertido = n Entonces
Escribir "n es capicua"
Sino
Escribir "n NO es capicua"
FinSi
Fin
*/
//Codigo//
#include <iostream>
using namespace std;
void p1_13() {
    long long n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: debe ser positivo." << endl;
        return;
    }
    long long copia = n, invertido = 0;
    while (copia > 0) {
        invertido = invertido * 10 + copia % 10;
        copia /= 10;
    }
    if (invertido == n)
        cout << n << " es capicua" << endl;
    else
        cout << n << " NO es capicua" << endl;
}
int main() {
    p1_13();
    return 0;
}
