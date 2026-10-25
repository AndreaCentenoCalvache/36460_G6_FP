//Problema 1.19. Segundo mayor de una secuencia//
/*
//Seudocódigo//
Inicio
mayor <- 0
segundo <- 0
cantidad <- 0
Leer x
Mientras x <> 0 Hacer
Si x > 0 Entonces
cantidad <- cantidad + 1
Si x > mayor Entonces
segundo <- mayor
mayor <- x
Sino Si x > segundo Entonces
segundo <- x
FinSi
FinSi
Leer x
FinMientras
Si cantidad < 2 Entonces
Escribir "Se necesitan al menos dos valores"
Sino
Escribir mayor, segundo
FinSi
Fin
*/
//Codigo//
#include <iostream>
using namespace std;
void p1_19() {
    int x, mayor = 0, segundo = 0, cantidad = 0;
    cout << "Ingrese enteros positivos (0 para terminar):" << endl;
    cin >> x;
    while (x != 0) {
        if (x > 0) {
            cantidad++;
            if (x > mayor) {
                segundo = mayor;
                mayor = x;
            } else if (x > segundo) {
                segundo = x;
            }
        } else {
            cout << "Valor ignorado (debe ser positivo)." << endl;
        }
        cin >> x;
    }
    if (cantidad < 2) {
        cout << "Se necesitan al menos dos valores." << endl;
    } else {
        cout << "Mayor = " << mayor << ", segundo mayor = " << segundo << endl;
    }
}
int main() {
    p1_19();
    return 0;
}
