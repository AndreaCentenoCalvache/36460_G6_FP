#include <stdio.h>

int main() {
    int mayor, segundo, contador, num;

    mayor = 0;
    segundo = 0;
    contador = 0;

    printf("Ingrese numeros positivos (0 para terminar):\n");
    scanf("%d", &num);

    while (num != 0) {
        contador = contador + 1;

        if (num > mayor) {
            segundo = mayor;
            mayor = num;
        } else if (num > segundo && num != mayor) {
            segundo = num;
        }

        scanf("%d", &num);
    }

    if (contador < 2) {
        printf("Faltan valores\n");
    } else {
        printf("Mayor = %d\n", mayor);
        printf("Segundo mayor = %d\n", segundo);
    }

    return 0;
}
