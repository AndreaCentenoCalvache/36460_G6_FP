#include <stdio.h>

int main(void)
{
    int secreto, intento, intentos;

    secreto = 57;
    intentos = 0;

    printf("Adivina el numero entre 1 y 100\n");
    do {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);
        intentos = intentos + 1;

        if (intento < secreto)
            printf("Mas alto\n");
        else if (intento > secreto)
            printf("Mas bajo\n");
        else
            printf("Acertaste\n");
    } while (intento != secreto);

    printf("Intentos usados: %d\n", intentos);
    return 0;
}
