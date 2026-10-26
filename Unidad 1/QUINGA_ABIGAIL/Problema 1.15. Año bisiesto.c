#include <stdio.h>

int main(void)
{
    int anio;

    printf("Ingrese un anio: ");
    scanf("%d", &anio);

    if (anio <= 0) {
        printf("Error: ingrese un anio positivo\n");
    } else {
        if (anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0))
            printf("%d es bisiesto\n", anio);
        else
            printf("%d no es bisiesto\n", anio);
    }
    return 0;
}
