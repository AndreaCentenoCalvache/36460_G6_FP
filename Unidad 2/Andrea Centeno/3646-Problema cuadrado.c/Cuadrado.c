/*CUADRADO
Enunciado:realizar un cuadrado
Nombre: Andrea Centeno
NRC: 36460
*/

#include<stdio.h>

    int main()
    {
    int i,j,n;
    do
    {

        printf("ingrese lado del cuadrado:");
        scanf ("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("*");
        printf("\n");
    }
    return 0;

}

