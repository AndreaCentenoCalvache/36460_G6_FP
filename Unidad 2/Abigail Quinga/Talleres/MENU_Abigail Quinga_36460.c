//UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//Nombre: Abigail Quinga
//NRC:36460
//Materia: Fundamentos de Programacion
//Carrera: Electronica y Automatizacion

#include <stdio.h>

int main()//Inicio
{//define las variables
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
                do // do while valida si ingreso un valor positivo
                {
                    printf("Lado del cuadrado: ");
                    scanf("%d", &n);
                } while (n <= 0);

                //recorre las filas, for externo
                for (i = 1; i <= n; i++)
                {
                 //recorre las columnas, for interno
                    for (j = 1; j <= n; j++)
                    {
                        if(i == 1 || i == n || j == 1 || j == n)//verifica la ubicacion del borde
                        {
                          printf("22");
                       }
                       else
                       {
                           printf("\n");
                        }
                    }
                break;

            case 2:
                //Serie de fibonacci
                printf("Ingrese n (n >= 1): ");
                scanf("%d", &n);

                if (n <= 0)//primera condicion a cumplir
                {
                    printf("Error: n debe ser >= 1\n");
                }
                else//segunda condicion a cumplir, si if no cumplio
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
                break;//fin del caso 2

            case 3:
            //Saliendo
                printf("Saliendo...\n");
                break;//fin del caso 3

            default://cuando el usuario ingresa una opcion no dada dentro del menu 
                printf("Opcion no valida\n");
                break;//fin del default
        }
    } while (op != 3);

}
