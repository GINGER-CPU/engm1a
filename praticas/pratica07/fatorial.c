#include <stdio.h>

int main() {
    int numero,
    int  i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido!\n");
    } else {
        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d e %llu\n", numero, fatorial);
    }

    return 0;
}