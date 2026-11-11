//Realizado por Julián Hernández
//36460
//Ejercicio cuadrado

#include <stdio.h>

int main() {
    int i, j, n;
    do {
        printf("Lado del cuadrado: ");
        scanf("%d", &n); //Repite si el número es cero o negativo
    } while (n <= 0);
    //Bucle filas
    for (i = 1; i <= n; i++)
    {
        //Bucle columnas
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n"); // Salto de linea al terminar cada fila
    }
    return 0;
}
