//Problema 1.19. Segundo mayor de una secuencia//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int x, mayor = 0, segundo = 0, cont = 0;
    printf("Ingrese enteros positivos (0 para terminar):\n");
    scanf("%d", &x);
    while (x != 0) {
        cont++;
        if (x > mayor) {
            segundo = mayor;
            mayor = x;
        } else if (x > segundo) {
            segundo = x;
        }
        scanf("%d", &x);
    }
    if (cont < 2) {
        printf("Hay menos de dos valores\n");
    } else {
        printf("Mayor = %d, segundo mayor = %d\n", mayor, segundo);
    }
    return 0;
}
