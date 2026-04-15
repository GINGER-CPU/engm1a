#include <stdio.h>

int main() {
    #define PI 3.14159265
    double E = 2.71828182;

    printf("Valor de PI (#define): %.8f\n", PI);
    printf("Valor de E: %.8f\n", E);

    E = 3.0;

    printf("Novo valor de E: %.8f\n", E);

    return 0;
}
