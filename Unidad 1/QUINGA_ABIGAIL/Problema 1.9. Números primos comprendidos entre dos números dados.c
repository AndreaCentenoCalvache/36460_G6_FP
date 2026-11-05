// Ejercicio 9
// Realizado por: Abigail Quinga
#include <stdio.h> //Libreria

int main() {//Inicio
    int m, p, aux, n, i, esPrimo, cont = 0;
//Define los valores para m y p
    printf("Ingrese el primer numero: ");
    scanf("%d", &m);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &p);
// if es la primera condicion que se revisa
    if (m > p) {
        aux = m;
        m = p;
        p = aux;
    }
 // for se repite desde m hasta p, de uno en uno
    for (n = m; n <= p; n++) {
// if si n es mayor o igual a 2 si se revisa si es primo
        if (n >= 2) {
            esPrimo = 1;
            i = 2;
// while se repite mientras i por i sea menor o igual a n y siga siendo primo
            while (i * i <= n && esPrimo) {
// if si n se divide exacto para i ya no es primo
                if (n % i == 0) {
                    esPrimo = 0;
                }
                i++;
            }
 // if si esPrimo quedo en 1 si es primo
            if (esPrimo) {
                printf("%d ", n);
                cont++; //contador
            }
        }
    }
// if es la primera condicion que se revisa
    if (cont == 0) { //si es 0, no existe primos
        printf("No hay primos en el rango");
    }
    printf("\n");
}//Fin
