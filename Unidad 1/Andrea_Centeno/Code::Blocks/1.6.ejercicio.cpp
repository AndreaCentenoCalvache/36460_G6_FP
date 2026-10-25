//Problema 1.6. Máximo, mínimo y media de alturas//

/*
//Seudocódigo//
Inicio
suma <- 0
cantidad <- 0
Leer h
Mientras h >= 0 Hacer
Si cantidad = 0 Entonces
maximo <- h
minimo <- h
Sino
Si h > maximo Entonces maximo <- h
Si h < minimo Entonces minimo <- h
FinSi
suma <- suma + h
cantidad <- cantidad + 1
Leer h
FinMientras
Si cantidad = 0 Entonces
Escribir "No hubo alturas validas"
Sino
Escribir suma / cantidad, maximo, minimo
FinSi
Fin
*/

//Codigo//
#include <iostream>
using namespace std;

void p1_6() {
    double h, suma = 0, maximo = 0, minimo = 0;
    int cantidad = 0;
    cout << "Ingrese alturas (un negativo termina la lectura):" << endl;
    cin >> h;
    while (h >= 0) {
        if (cantidad == 0) {
            maximo = h;
            minimo = h;
        } else {
            if (h > maximo) maximo = h;
            if (h < minimo) minimo = h;
        }
        suma += h;
        cantidad++;
        cin >> h;
    }
    if (cantidad == 0) {
        cout << "No se ingreso ninguna altura valida." << endl;
    } else {
        cout << "Media: " << suma / cantidad << endl;
        cout << "Maximo: " << maximo << endl;
        cout << "Minimo: " << minimo << endl;
    }
}

int main() {
    p1_6();
    return 0;
}
