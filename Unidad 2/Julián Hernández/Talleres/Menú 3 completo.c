
// Realizado por Julián Hernández
// Fecha: 22/11/2026
// Nrc: 36460
// Ejercicio: Menu Principal, Fecha y Series

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// CONSTANTES
#define ANIO_MIN 1900
#define ANIO_MAX 2015

// FUNCIONES
void menuPrincipal();
void validarFecha();
int obtenerDiasMes(int mes);
void mostrarNombreMes(int mes);
void serieLetras();
void serieNumeros();

// FUNCION PRINCIPAL
int main() {

    menuPrincipal();

    return 0;
}

// MENU PRINCIPAL
void menuPrincipal() {

    int opcion;

    do {

        system("cls");

        printf("MENU PRINCIPAL\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie de letras\n");
        printf("3. Desplegar serie de numeros\n");
        printf("4. Salir\n");
        printf("\n");

        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                validarFecha();
                break;

            case 2:
                serieLetras();
                break;

            case 3:
                serieNumeros();
                break;

            case 4:
                printf("\nSalir...\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

        if(opcion != 4) {
            printf("\nPresione una tecla para continuar");
            getch();
        }

    } while(opcion != 4);
}

// FUNCION PARA VALIDAR FECHA
void validarFecha() {

    int anio, mes, dia;
    int maxDias;

    printf("\nVALIDAR FECHA\n");

    // VALIDAR ANIO
    do {

        printf("Ingrese el anio (%d-%d): ", ANIO_MIN, ANIO_MAX);
        scanf("%d", &anio);

        if(anio < ANIO_MIN || anio > ANIO_MAX) {
            printf("Anio incorrecto. Intente nuevamente.\n");
        }

    } while(anio < ANIO_MIN || anio > ANIO_MAX);

    // VALIDAR MES
    do {

        printf("Ingrese el mes (1-12): ");
        scanf("%d", &mes);

        if(mes < 1 || mes > 12) {
            printf("Mes incorrecto. Intente nuevamente.\n");
        }

    } while(mes < 1 || mes > 12);

    // OBTENER CANTIDAD DE DIAS DEL MES
    maxDias = obtenerDiasMes(mes);

    // VALIDAR DIA
    do {

        printf("Ingrese el dia (1-%d): ", maxDias);
        scanf("%d", &dia);

        if(dia < 1 || dia > maxDias) {
            printf("Dia incorrecto. Intente nuevamente.\n");
        }

    } while(dia < 1 || dia > maxDias);

    // MOSTRAR FECHA
    printf("\nFecha ingresada: %d de ", dia);

    mostrarNombreMes(mes);

    printf(" de %d\n", anio);
}

// FUNCION PARA OBTENER LOS DIAS DEL MES
int obtenerDiasMes(int mes) {

    switch(mes) {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;

        case 2:
            return 29;

        default:
            return 0;
    }
}

// FUNCION PARA MOSTRAR EL NOMBRE DEL MES
void mostrarNombreMes(int mes) {

    switch(mes) {

        case 1: printf("Enero"); break;
        case 2: printf("Febrero"); break;
        case 3: printf("Marzo"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Mayo"); break;
        case 6: printf("Junio"); break;
        case 7: printf("Julio"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Septiembre"); break;
        case 10: printf("Octubre"); break;
        case 11: printf("Noviembre"); break;
        case 12: printf("Diciembre"); break;
    }
}

// FUNCION PARA DESPLEGAR SERIE DE LETRAS
void serieLetras() {

    int n, i;
    int letra1 = 'a';
    int letra2 = 'b';

    printf("\nSERIE DE LETRAS\n");

    do {

        printf("Ingrese la cantidad de terminos: ");
        scanf("%d", &n);

    } while(n <= 0);

    // PRIMERA FILA
    for(i = 1; i <= n; i++) {

        if(letra1 <= 'z') {
            printf("%c ", letra1);
        } else {
            printf("  ");
        }

        letra1 += 2;
    }

    printf("\n");

    // SEGUNDA FILA: GUIONES
    for(i = 1; i <= n; i++) {
        printf("- ");
    }

    printf("\n");

    // TERCERA FILA
    for(i = 1; i <= n; i++) {

        if(letra2 <= 'z') {
            printf("%c ", letra2);
        } else {
            printf("  ");
        }

        letra2 += 2;
    }

    printf("\n");
}

// FUNCION PARA DESPLEGAR SERIE DE NUMEROS
void serieNumeros() {

    int n, i;
    int a = 1;
    int b = 5;

    printf("\nSERIE DE NUMEROS\n");

    do {

        printf("Ingrese la cantidad de terminos: ");
        scanf("%d", &n);

    } while(n < 0);

    for(i = 1; i <= n; i++) {

        if(i % 2 != 0) {
            printf("%d ", a);
            a += 2;
        }
        else {
            printf("%d ", b);
            b += 2;
        }

        if(i % 2 == 0) {
            printf("\n");
        }
    }

    if(n % 2 != 0 || n == 0) {
        printf("\n");
    }
}

