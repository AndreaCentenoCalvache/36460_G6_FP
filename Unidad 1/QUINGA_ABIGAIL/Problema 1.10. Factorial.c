#include <stdio.h>

int main() {
    int n, i;
    unsigned long long f;

    printf("Ingrese un entero n >= 0: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: el factorial no existe para numeros negativos\n");
    } else {
        f = 1;
        for (i = 2; i <= n; i++) {
            f = f * i;
        }
        printf("%d! = %llu\n", n, f);
    }
    return 0;
}
