#include <stdio.h>

int main() {
    int n, a, b, temp, i;

    printf("Ingrese n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Ingrese numero >= 1\n");
    } else {
        a = 0;
        b = 1;
        printf("%d ", a);

        if (n > 1) {
            printf("%d ", b);
            for (i = 3; i <= n; i++) {
                temp = a + b;
                printf("%d ", temp);
                a = b;
                b = temp;
            }
        }
        printf("\n");
    }

    return 0;
}
