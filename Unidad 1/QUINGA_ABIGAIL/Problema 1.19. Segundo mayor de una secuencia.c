#include <stdio.h>

int main(void)
{
    int x, mayor, segundo, cont;

    mayor = 0;
    segundo = 0;
    cont = 0;

    printf("Ingrese enteros positivos (0 para terminar):\n");
    scanf("%d", &x);

    while (x != 0) {
        cont = cont + 1;
        if (x > mayor) {
            segundo = mayor;
            mayor = x;
        } else {
            if (x > segundo)
                segundo = x;
        }
        scanf("%d", &x);
    }

    if (cont < 2)
        printf("Se ingresaron menos de 2 valores\n");
    else
        printf("Mayor = %d, Segundo mayor = %d\n", mayor, segundo);

    return 0;
}
