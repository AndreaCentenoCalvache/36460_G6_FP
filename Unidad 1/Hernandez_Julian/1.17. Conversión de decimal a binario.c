#include <stdio.h>

int main() {
    int n, digito;
    long long binario, potencia;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    binario = 0;
    potencia = 1;

    while (n > 0) {
        digito = n % 2;
        binario = binario + digito * potencia;
        potencia = potencia * 10;
        n = n / 2;
    }

    printf("Binario = %lld\n", binario);

    return 0;
}

