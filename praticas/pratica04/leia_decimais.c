#include <stdio.h>

int main() {
    float nota1, nota2;

    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);

    return 0;
}