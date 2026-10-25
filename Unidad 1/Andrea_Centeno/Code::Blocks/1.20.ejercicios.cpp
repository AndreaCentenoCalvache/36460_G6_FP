 //Problema 1.20. Adivina el número//
/*
//Seudocodigo//

Inicio
    Leer c
    Si c < 0 Entonces
        Escribir "Error: segundos negativos"
    Sino
        dias <- c DIV 86400
        c <- c MOD 86400
        horas <- c DIV 3600
        c <- c MOD 3600
        minutos <- c DIV 60
        segundos <- c MOD 60
        Escribir dias, horas, minutos, segundos
    FinSi
Fin
*/
//Codigo//
 #include <iostream>
using namespace std;
void p1_5() {
    long long c;
    cout << "Ingrese los segundos: ";
    cin >> c;
    if (c < 0) {
        cout << "Error: los segundos no pueden ser negativos." << endl;
        return;
    }
    long long dias = c / (24 * 60 * 60);
    c = c % (24 * 60 * 60);
    long long horas = c / (60 * 60);
    c = c % (60 * 60);
    long long minutos = c / 60;
    long long segundos = c % 60;
    cout << dias << " dias, " << horas << " horas, "
         << minutos << " minutos y " << segundos << " segundos" << endl;
}
int main() {
    p1_5();
    return 0;
}
