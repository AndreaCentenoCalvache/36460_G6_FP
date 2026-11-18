//      UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 //INTEGRANTES:QUINGA ABIGAIL, HERNANDÉZ JULIÁN ,CENTENO ANDREA
 //ASIGNATURA: FUNDAMENTOS DE PROGRAMACION
 //CARRERA:ELECTRONICA Y AUTOMATIZACION
 //NRC: 36460

 #include <stdio.h>

 int main() {
   int op;

   do{
     printf("\nBIENVENIDOS A ESTE PROGRAMA\n");
     printf("MENU PRINCIPAL\n");
     printf("1. Matriz \n");
     printf("2. Vector \n");
     printf("3. Salir\n");
     printf("Seleccione una opcion: ");
     scanf("%d", &op);

     switch(op) {
         case 1: {
            int fil; //Filas
            int colum; //Columnas

               printf("Ingrese el numero de filas de la matriz: \n");
               scanf("%d", &fil);
               printf("Ingrese el numero de columnas de la matriz: \n");
               scanf("%d", &colum);

               if(fil <= 0 || colum <= 0){
                  printf("Las dimensiones deben ser mayores a 0\n");
                  break;
               }

               float n [fil][colum];

               printf("Ingrese numeros flotantes para la matriz: \n");
               for(int i=0; i < fil; i++){
                  for(int j=0; j < colum; j++){
                      printf("Ingrese el valor para [%d][%d]: ", i, j);
                      scanf("%f", &n[i][j]);
                  }
                  }

                printf("Resultado de la Matriz resultante: \n");
                for(int i=0; i < fil; i++){
                   for(int j=0; j < colum; j++){
                       printf("%.2f\t", n[i][j]);
                   }
                   printf("\n");
                }
                break;

            }
            case 2:{
            int tam;

            do{
                printf("Ingrese el tamaño de los vectores: \n");
                scanf("%d",&tam);

                if(tam<= 0){
                    printf("Ingrese un numero mayor a 0 para el tamaño de su vector\n");
                }
            }while (tam<= 0);

            int vector0[tam];
            int vector1[tam];

            printf("Ingrese %d numeros enteros para el vector0: \n", tam);
            for(int i=0; i < tam; i++){
                printf("Ubicacion [%d]: ", i);
                scanf("%d", &vector0[i]);
            }
            printf("Ingrese %d numeros enteros para el vector1: \n", tam);
            for(int i=0; i < tam; i++){
                printf("Ubicacion [%d]: ", i);
                scanf("%d", &vector1[i]);
            }
            printf("Resultado de la suma de los dos vectores: \n");
            for (int i = 0; i < tam; i++) {
                printf("Ubicacion [%d]: %d\n", i, vector0[i] + vector1[i]);
            }
            break;
        }
        case 3:
              printf("Saliendo del programa...\n");
              break;
        default:
            printf("Opcion no valida \n");

        }

     }while (op != 3);
  }
