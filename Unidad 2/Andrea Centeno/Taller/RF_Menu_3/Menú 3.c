/* Universidad de las Fuerzas Armadas-Espe
    Carrera: Electronica y Automatización
    Asignatura:Fundamentos de Programacion
    Npmbre: Anfdrea Centeno
    NRC:36460
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    int anio, mes, dia, max_dias;
    int i;
    char c;
    char *meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                     "Julio", "Agosto", "Septiembre", "Octubre",
                     "Noviembre", "Diciembre"};

    do
    {
        printf("MENU\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                do
                {
                    printf("Ingrese anio (1900-2015): ");
                    scanf("%d", &anio);
                } while (anio < 1900 || anio > 2015);

                do
                {
                    printf("Ingrese mes (1-12): ");
                    scanf("%d", &mes);
                } while (mes < 1 || mes > 12);

                if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
                    max_dias = 30;
                else if (mes == 2)
                    max_dias = 29;
                else
                    max_dias = 31;

                do
                {
                    printf("Ingrese dia (1-%d): ", max_dias);
                    scanf("%d", &dia);
                } while (dia < 1 || dia > max_dias);

                printf("%d de %s de %d\n", dia, meses[mes - 1], anio);
                break;

            case 2:
                for (c = 'A'; c <= 'Z'; c++)
                    printf("%c ", c);
                printf("\n");
                break;

            case 3:
                for (i = 1; i <= 10; i++)
                    printf("%d ", i);
                printf("\n");
                break;

            case 4:
                break;

            default:
                printf("Opcion no valida\n");
        }

       if (op != 4)
{
    getchar();
    printf("Presione Enter para continuar\n");
    getchar();
    system("cls");
}

    } while (op != 4);

    return 0;
}
