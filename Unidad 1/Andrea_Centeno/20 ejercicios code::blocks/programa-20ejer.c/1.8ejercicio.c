//Problema 1.8. Número primo//
//Enunciado:leer un entero mayor que 1 y determine si es primo o no//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, d = 2, primo = 1;
    printf("Ingrese un entero mayor que 1: ");
    scanf("%d", &n);
    //extructura repetitiva :while
    prueba divisores solo hasta la raiz de n y se detiene 
    en cuanto encuentra uno (bandera prima)//
    while (d * d <= n && primo) {
        //Estructura de control: if 
        si d divide a n entonces n no es primo//
        if (n % d == 0) {
            primo = 0;
        }
        d++;
    }
    if (primo) printf("%d es primo\n", n);
    else       printf("%d no es primo\n", n);
    return 0;
}
