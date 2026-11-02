//Problema 1.20. Adivina el número//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int secreto = 42, intento, intentos = 0;
    do {
        printf("Adivina el numero (1-100): ");
        scanf("%d", &intento);
        intentos++;
        if (intento < secreto) {
            printf("mas alto\n");
        } else if (intento > secreto) {
            printf("mas bajo\n");
        } else {
            printf("acertaste!\n");
        }
    } while (intento != secreto);
    printf("Intentos usados: %d\n", intentos);
    return 0;
}
