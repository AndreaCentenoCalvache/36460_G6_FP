#include <stdio.h>

int main (){
    int m, n;
    float media;

    printf("Ingrese el primer numero: ");
    scanf("%d",&m);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n);

    media = (m + n) / 2.0;
    printf("La media es: %.2f\n", media);
    return 0;
}


