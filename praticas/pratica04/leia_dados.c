#include <stdio.h>

int main() {
    int idade;
    float altura;
    float peso;
    char sexo;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo); 

    printf("Digite o peso (ex: 72.825): ");
    scanf("%f", &peso);

    printf("\n--- FICHA CADASTRAL ---\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Sexo: %c\n", sexo);
    printf("Peso: %.3f kg\n", peso);

    return 0;
}