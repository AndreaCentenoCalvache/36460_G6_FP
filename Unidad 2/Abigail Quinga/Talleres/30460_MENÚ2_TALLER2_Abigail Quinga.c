//      UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 //INTEGRANTES:QUINGA ABIGAIL, HERNANDÉZ JULIÁN ,CENTENO ANDREA
 //ASIGNATURA: FUNDAMENTOS DE PROGRAMACION
 //CARRERA:ELECTRONICA Y AUTOMATIZACION
 //NRC: 36460

 #include <stdio.h>

 int main() { //Inicio
   int op; //Caja vacia

   do{ //¿Que hay en la caja?
    //do while: el menu se repite hasta que el usuario ingrese 3 para la salida del programa
     printf("\nBIENVENIDOS A ESTE PROGRAMA\n");
     printf("MENU PRINCIPAL\n"); 
     printf("1. Matriz \n"); // 1. realiza una matriz
     printf("2. Vector \n"); // 2. realiza un vector
     printf("3. Salir\n"); // 3. Salida 
     printf("Seleccione una opcion: ");
     scanf("%d", &op); //Se guarda en la opcion en la variable op

     switch(op) {
      //switch ejecuta un caso que elija el usuario
         case 1: {
          //variables para el tamaño de la matriz
            int fil; //Filas
            int colum; //Columnas

               printf("Ingrese el numero de filas de la matriz: \n");
               scanf("%d", &fil);
               printf("Ingrese el numero de columnas de la matriz: \n");
               scanf("%d", &colum);
          //if condicion de que no se aceptan 0 o menores que ceros(negativos)

               if(fil <= 0 || colum <= 0){
                  printf("Las dimensiones deben ser mayores a 0\n");
                  break; //regresa al menu si es dato es invalido
               }
               //tamaño fijo de la matriz 
               float n [fil][colum];
               //primera matriz y primer for
               printf("Ingrese numeros flotantes para la matriz: \n");
               for(int i=0; i < fil; i++){
                  for(int j=0; j < colum; j++){
                      printf("Ingrese el valor para [%d][%d]: ", i, j);
                      scanf("%f", &n[i][j]);
                  }
                }
                //segundo for y resultado de la matriz
                printf("Resultado de la Matriz resultante: \n");
                for(int i=0; i < fil; i++){
                   for(int j=0; j < colum; j++){
                       printf("%.2f\t", n[i][j]);
                   }
                   printf("\n");
                }
                break; //fin del caso 1

            }
            case 2:{
            int tam; //variable tam para el tamaño
            // do while repite hasta que ingrese un tamaño mayor a 0
            do{
                printf("Ingrese el tamaño de los vectores: \n");
                scanf("%d",&tam);
             //if valida si es 0 o negativo, para advertirle
                if(tam<= 0){
                    printf("Ingrese un numero mayor a 0 para el tamaño de su vector\n");
                }
            }while (tam<= 0);
            //variables para los dos vectores
            int vector0[tam];
            int vector1[tam];
           // primer vector
            printf("Ingrese %d numeros enteros para el vector0: \n", tam);
            for(int i=0; i < tam; i++){
                printf("Ubicacion [%d]: ", i);
                scanf("%d", &vector0[i]); //Se guarda en la posicion i
            }
            //segundo vector
            printf("Ingrese %d numeros enteros para el vector1: \n", tam);
            for(int i=0; i < tam; i++){
                printf("Ubicacion [%d]: ", i);
                scanf("%d", &vector1[i]); //Se guarda en la posicion i
            }
            //se va a mostrar el vector posicion por posicion
            printf("Resultado de la suma de los dos vectores: \n");
            for (int i = 0; i < tam; i++) {
                printf("Ubicacion [%d]: %d\n", i, vector0[i] + vector1[i]);
            }
            break; //Fin del caso 2
        }
        case 3:
              printf("Saliendo del programa...\n");
              break; //Fin del caso 3
        default: //si el usuario ingresa un numero que no esta dentro del menu 
            printf("Opcion no valida \n");
            break; //fin del default

        }// cierre del switch 

     }while (op != 3); // ¿Sigue siendo diferente de 3? Sí, se repite
      printf("\nGRACIAS POR USAR EL PROGRAMA\n");
  } //Fin 

