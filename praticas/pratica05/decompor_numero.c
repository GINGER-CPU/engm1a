#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &numero);

    int milhares = numero / 1000;
    int centenas = (numero % 1000) / 100;
    int dezenas = (numero % 100) / 10;
    int unidades = numero % 10;

    printf("\nDecomposicao:\n");
    printf("Milhares: %d\n", milhares);
    printf("Centenas: %d\n", centenas);
    printf("Dezenas: %d\n", dezenas);
    printf("Unidades: %d\n", unidades);

    return 0;
}