#include <stdio.h>

int main() {
    #define PI 3.14159265
    const double E = 2.71828182;

    printf("Valor de PI (#define): %.8f\n", PI);
    printf("Valor de E (const): %.8f\n", E);

    E = 3.0;

    return 0;
}

