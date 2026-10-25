//Problema 1.10. Factorial//

/*
//Seudocódigo//
Inicio
Leer n
Si n < 0 Entonces
Escribir "Error: n negativo"
Sino
fact <- 1
Para i <- 2 Hasta n Hacer
fact <- fact * i
FinPara
Escribir fact
FinSi
Fin
*/

//Codigo//
#include <iostream>
using namespace std;
void p1_10() {
    int n;
    cout << "Ingrese n (n >= 0): ";
    cin >> n;
    if (n < 0) {
        cout << "Error: el factorial no esta definido para negativos." << endl;
        return;
    }
    if (n > 20) {
        cout << "Error: n > 20 desborda un unsigned long long." << endl;
        return;
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    cout << n << "! = " << fact << endl;
}
int main() {
    p1_10();
    return 0;
}
