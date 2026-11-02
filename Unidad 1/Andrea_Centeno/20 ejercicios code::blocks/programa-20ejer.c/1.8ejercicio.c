//Problema 1.8. Número primo//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int n, d = 2, primo = 1;
    printf("Ingrese un entero mayor que 1: ");
    scanf("%d", &n);
    while (d * d <= n && primo) {
        if (n % d == 0) {
            primo = 0;
        }
        d++;
    }
    if (primo) printf("%d es primo\n", n);
    else       printf("%d no es primo\n", n);
    return 0;
}
