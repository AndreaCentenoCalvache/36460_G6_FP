//UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//Nombre: Abigail Quinga
//NRC:36460
//Materia: Fundamentos de Programacion
//Carrera: Electronica y Automatizacion

#include <stdio.h>

int main()
{
    int op, n, i, j;
    int ant, act, sig;
    int k;

    do
    {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            //Cuadrado
                do
                {
                    printf("Lado del cuadrado: ");
                    scanf("%d", &n);
                } while (n <= 0);

                //Bucle de fila
                for (i = 1; i <= n; i++)
                {
                    //Bucle de columna
                    for (j = 1; j <= n; j++)
                    {
                        printf("22");
                    }
                    printf("\n");
                }
                break;

            case 2:
                //Serie de fibonacci
                printf("Ingrese n (n >= 1): ");
                scanf("%d", &n);

                if (n <= 0)
                {
                    printf("Error: n debe ser >= 1\n");
                }
                else
                {
                    ant = 0;
                    act = 1;
                    for (k = 1; k <= n; k++)
                    {
                        printf("%d ", ant);
                        sig = ant + act;
                        ant = act;
                        act = sig;
                    }
                    printf("\n");
                }
                break;

            case 3:
            //Saliendo
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    } while (op != 3);

}
