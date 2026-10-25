//Problema 1.15. Año bisiesto//
/*
//Seudocódigo//
Inicio
Leer anio
Si ((anio MOD 4 = 0) Y (anio MOD 100 <> 0)) O (anio MOD 400 = 0) Entonces
Escribir "Es bisiesto"
Sino
Escribir "NO es bisiesto"
FinSi
Fin
*/

//Codigo//
#include <iostream>
using namespace std;
void p1_15() {
    int anio;
    cout << "Ingrese un anio: ";
    cin >> anio;
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
        cout << anio << " es bisiesto" << endl;
    else
        cout << anio << " NO es bisiesto" << endl;
}

int main() {
    p1_15();
    return 0;
}
