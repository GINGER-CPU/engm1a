#include <stdio.h>

int main() {
    float numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    float soma = numero1 + numero2;
    float subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;

    printf("\nResultados:\n");
    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);

    if (numero2 != 0) {
        float divisao = numero1 / numero2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Divisao: impossivel (divisao por zero)\n");
    }

    return 0;
}