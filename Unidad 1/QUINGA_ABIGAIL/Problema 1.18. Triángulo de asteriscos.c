#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("Ingrese n (n >= 1): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error: n debe ser >= 1\n");
    } else {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
