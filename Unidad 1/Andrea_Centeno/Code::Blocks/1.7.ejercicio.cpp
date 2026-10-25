//Problema 1.7. Raíz cuadrada entera//
/*
//Seudocódigo//
Inicio
  Leer N
  Si N <= 0 Entonces
    Escribir "Error: N debe ser positivo"
  Sino
    i <- 1
    Mientras i * i <= N Hacer
      i <- i + 1
    FinMientras
    Escribir i - 1
  FinSi
Fin
*/

//Codigo//
#include <iostream>

using namespace std;

void p1_7() {
    long long N;
    cout << "Ingrese un numero positivo N: ";
    cin >> N;
    if (N <= 0) {
        cout << "Error: N debe ser positivo." << endl;
        return;
    }
    long long i = 1;
    while (i * i <= N) {
        i++;
    }
    cout << "La raiz cuadrada entera de " << N << " es " << i - 1 << endl;
}

int main() {
    p1_7();
    return 0;
}
