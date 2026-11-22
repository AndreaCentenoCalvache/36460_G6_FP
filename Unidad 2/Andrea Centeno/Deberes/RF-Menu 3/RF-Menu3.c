/* Universidad de las Fuerzas Armadas-Espe
    Carrera: Electronica y Automatizaci�n
    Asignatura:Fundamentos de Programacion
    Npmbre: Andrea Centeno
    NRC:36460
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    int anio, mes, dia, max_dias;
    int i;
    int n,a,b;
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
                do
                {
                    printf("Ingrese cantidad de terminos: ");
                    scanf("%d", &n);
                } while (n <= 0);

                for (i = 0; i < n && 'a' + 2 * i <= 'z'; i++)
                    printf("%c ", 'a' + 2 * i);
                printf("\n");

                for (i = 0; i < n && 'a' + 2 * i <= 'z'; i++)
                    printf("- ");
                printf("\n");

                for (i = 0; i < n && 'b' + 2 * i <= 'z'; i++)
                    printf("%c ", 'b' + 2 * i);
                printf("\n");
                break;

            case 3:
                do
                {
                    printf("Ingrese cantidad de terminos: ");
                    scanf("%d", &n);
                } while (n < 0);

                a = 1;  // se reinician en cada ejecución
                b = 5;

                for (i = 1; i <= n / 2; i++)
                {
                    printf("%d, %d", a, b);
                    if (i < n / 2 || n % 2 != 0)
                        printf(", ");
                    a += 2;
                    b += 2;

                }

                if (n % 2 != 0)
                    printf("%d", a);   // último término de la primera subsecuencia

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
