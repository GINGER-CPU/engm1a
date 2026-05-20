#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Pre-incremento: %d\n", ++numero);
    printf("Pos-incremento: %d\n", numero++);
    printf("Valor apos pos-incremento: %d\n", numero);

    printf("Pre-decremento: %d\n", --numero);
    printf("Pos-decremento: %d\n", numero--);
    printf("Valor apos pos-decremento: %d\n", numero);

    return 0;
}