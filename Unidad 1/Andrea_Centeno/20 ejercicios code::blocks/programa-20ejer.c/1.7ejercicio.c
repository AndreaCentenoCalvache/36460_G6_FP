//Problema 1.7. Raíz cuadrada entera//
//Nombre:Andrea Centeno//
//NRC:36460//

#include <stdio.h>

int main(void) {
    int N, i = 1, R;
    printf("Ingrese N (positivo): ");
    scanf("%d", &N);
    while (i * i <= N) {
        i++;
    }
    R = i - 1;
    printf("Raiz cuadrada entera de %d = %d\n", N, R);
    return 0;
}
