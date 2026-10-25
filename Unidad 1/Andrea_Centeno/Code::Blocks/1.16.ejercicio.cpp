//Problema 1.16. Número perfecto//

/*
//Seudocódigo//
Inicio
Leer n
suma <- 0
Para d <- 1 Hasta n DIV 2 Hacer
Si n MOD d = 0 Entonces
suma <- suma + d
FinSi
FinPara
Si (suma = n) Y (n <> 1) Entonces
Escribir "n es perfecto"
Sino
Escribir "n NO es perfecto"
FinSi
Fin
*/

//Codigo//
#include <iostream>
using namespace std;
void p1_16() {
    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: debe ser positivo." << endl;
        return;
    }
    int suma = 0;
    for (int d = 1; d <= n / 2; d++) {
        if (n % d == 0) suma += d;
    }
    if (suma == n && n != 1)
        cout << n << " es perfecto" << endl;
    else
        cout << n << " NO es perfecto" << endl;
}

int main() {
    p1_16();
    return 0;
}
