#include <stdio.h>

int main(void)
{
    int a, b, r;

    printf("Ingrese a y b (separados por espacio): ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Error: deben ser numeros positivos\n");
    } else {
        while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        printf("MCD = %d\n", a);
    }
    return 0;
}
