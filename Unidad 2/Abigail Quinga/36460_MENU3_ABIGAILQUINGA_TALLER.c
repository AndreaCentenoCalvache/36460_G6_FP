//UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//Nombre: Abigail Quinga
//NRC:36460
//Materia: Fundamentos de Programacion
//Carrera: Electronica y Automatizacion






#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void validarFecha() {
    int anio, mes, dia, limiteDia;
    char nombreMes[15];


    do {
        printf("Ingrese el anio (1900 - 2015): \n ");
        scanf("%d", &anio);

        if (anio < 1900 || anio > 2015) {
            printf("anio no valido intente nuevamente \n");
        }

    } while (anio < 1900 || anio > 2015);


    do {
        printf("Ingrese el mes (1 - 12): \n");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mes no valido intente nuevamente\n");
        }

    } while (mes < 1 || mes > 12);


    switch (mes) {
        case 1:
            limiteDia = 31;
            sprintf(nombreMes, "Enero");
            break;

        case 2:
            limiteDia = 29;
            sprintf(nombreMes, "Febrero");
            break;

        case 3:
            limiteDia = 31;
            sprintf(nombreMes, "Marzo");
            break;

        case 4:
            limiteDia = 30;
            sprintf(nombreMes, "Abril");
            break;

        case 5:
            limiteDia = 31;
            sprintf(nombreMes, "Mayo");
            break;

        case 6:
            limiteDia = 30;
            sprintf(nombreMes, "Junio");
            break;

        case 7:
            limiteDia = 31;
            sprintf(nombreMes, "Julio");
            break;

        case 8:
            limiteDia = 31;
            sprintf(nombreMes, "Agosto");
            break;

        case 9:
            limiteDia = 30;
            sprintf(nombreMes, "Septiembre");
            break;

        case 10:
            limiteDia = 31;
            sprintf(nombreMes, "Octubre");
            break;

        case 11:
            limiteDia = 30;
            sprintf(nombreMes, "Noviembre");
            break;

        case 12:
            limiteDia = 31;
            sprintf(nombreMes, "Diciembre");
            break;
    }


    do {
        printf("\nIngrese el dia (1 - %d): ", limiteDia);
        scanf("%d", &dia);

        if (dia < 1 || dia > limiteDia) {
            printf("Dia no valido. Intente nuevamente.\n");
        }

    } while (dia < 1 || dia > limiteDia);


    printf("Fecha ingresada:\n");
    printf("%d de %s de %d\n", dia, nombreMes, anio);

}

int main() {
    int opcion;

    do {
        system("cls");


        printf("\nMENU PRINCIPAL\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                validarFecha();
                break;

            case 2:
                printf("\nDesplegar serie letras\n");
                break;

            case 3:
                printf("\nDesplegar serie numero\n");
                break;

            case 4:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpcion no valida\n");
        }

        if (opcion != 4) {
            printf("\nPresione una tecla para continuar...");
            getch();
        }

    } while (opcion != 4);

}





