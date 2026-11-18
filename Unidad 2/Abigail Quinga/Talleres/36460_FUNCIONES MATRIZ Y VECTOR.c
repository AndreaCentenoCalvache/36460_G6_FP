//      UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 //INTEGRANTES:QUINGA ABIGAIL, HERNANDÉZ JULIÁN ,CENTENO ANDREA
 //ASIGNATURA: FUNDAMENTOS DE PROGRAMACION
 //CARRERA:ELECTRONICA Y AUTOMATIZACION
 //NRC: 36460
#include <stdio.h>

// Define las funciones
void menu(); //void: funcion que no devuelve un resultado
void matriz();
void vector();

int main() { //Inicio

    int op; //

    do { //do while permite que el programa continue mientras sea distinto de 3

        menu();//Funcion que mostrara al menu

        printf("Seleccione una opcion: ");
        scanf("%d", &op);

        switch(op) { //switch ejecuta los diferentes casos

            case 1:
                matriz();
                break; //fin del caso 1

            case 2:
                vector();
                break;//fin del caso 2

            case 3:
                printf("Saliendo del programa...\n");
                break;//fin del caso 3

            default://se ejecuta cuando la opcion ingresada por el usuario no es valida o noe esta dentro de las indicaciones
                printf("Opcion no valida\n");
                break;//fin del default
        }

    } while(op != 3);

    printf("\nGRACIAS POR USAR EL PROGRAMA\n");

}

// Funcion del menu
void menu() {

    printf("\nBIENVENIDOS A ESTE PROGRAMA\n");
    printf("MENU PRINCIPAL\n");
    printf("1. Matriz\n");
    printf("2. Vector\n");
    printf("3. Salir\n");
}

// funcion del caso 1
void matriz() {

    int fil;
    int colum;

    printf("Ingrese el numero de filas de la matriz:\n");
    scanf("%d", &fil);

    printf("Ingrese el numero de columnas de la matriz:\n");
    scanf("%d", &colum);
//if se compruba si son validas las dimensiones ingresadas
    if(fil <= 0 || colum <= 0) {

        printf("Las dimensiones deben ser mayores a 0\n");
        return;//termino el caso 1 y regresa al menu
    }

    float n[fil][colum];

    printf("Ingrese numeros flotantes para la matriz:\n");

    for(int i = 0; i < fil; i++) {//se encarga de las filas de la matriz

        for(int j = 0; j < colum; j++) { //for interno: de las columnas de la matriz

            printf("Ingrese el valor para [%d][%d]: ", i, j);
            scanf("%f", &n[i][j]);

        }
    }

    printf("Resultado de la Matriz resultante:\n");

    for(int i = 0; i < fil; i++) {

        for(int j = 0; j < colum; j++) {

            printf("%.2f\t", n[i][j]);

        }

        printf("\n");
    }
}

// funcion del caso 2
void vector() {

    int tam;

    do { //do while solicita que el tamaño sea menor o igual a cero y si no lo es, se seguira repitiendo

        printf("Ingrese el tamaño de los vectores:\n");
        scanf("%d", &tam);

        if(tam <= 0) {//if valida la condicion de que el tamaño sea menor o igual a cero

            printf("Ingrese un numero mayor a 0 para el tamaño de su vector\n");

        }

    } while(tam <= 0);

    int vector0[tam];
    int vector1[tam];

    printf("Ingrese %d numeros enteros para el vector0:\n", tam);

    for(int i = 0; i < tam; i++) {

        printf("Ubicacion [%d]: ", i);
        scanf("%d", &vector0[i]);

    }

    printf("Ingrese %d numeros enteros para el vector1:\n", tam);

    for(int i = 0; i < tam; i++) {

        printf("Ubicacion [%d]: ", i);
        scanf("%d", &vector1[i]);

    }

    printf("Resultado de la suma de los dos vectores:\n");

    for(int i = 0; i < tam; i++) {

        printf("Ubicacion [%d]: %d\n", i,
        vector0[i] + vector1[i]);

    }
}
