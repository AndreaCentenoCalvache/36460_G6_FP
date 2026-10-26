#include <stdio.h>

int main() {
    int secreto, contador, intento;

    secreto = 37;
    contador = 0;

    printf("Adivine un numero entre 1 y 100\n");

    do {
        scanf("%d", &intento);
        contador = contador + 1;

        if (intento < secreto) {
            printf("Mas alto\n");
        } else if (intento > secreto) {
            printf("Mas bajo\n");
        } else {
            printf("Acertaste!\n");
        }
    } while (intento != secreto);

    printf("Lo lograste en %d intentos\n", contador);

    return 0;
}
