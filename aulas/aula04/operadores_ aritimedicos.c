#include <stdio.h>
#include <math.h>
int main(){

    int operador01;
    int operador02;

    printf("digite um numero\n");
    scanf( "%i &operador01\n");
    while (getchar() != '\n');
    
    printf("digite outro numero\n");
    scanf( "%i &operador02\n");
    while (getchar() != '\n');

    int soma = operador01 + operador02;
    int subtracao =operador01 - operador02;
    int multiplicacao = operador01 * operador02;
    float divisao = operador01 /operador02;
    int resto = operador01 % operador02 ;
printf(" %i + %i = %i\n", operador01,operador02,soma);
printf("%i - %i= %i\n", operador01,operador02,subtracao);
printf("%i * %i= %i\n", operador01,operador02,multiplicacao);
printf("%i / %i = %f\n", operador01,operador02,divisao);

double potencia = pow ( 2,3);
double raiz_quadrada = sqrt(2) ;
double logaritimo = log(2)  ;
double seno  =sin( 2*3.14/180)  ;

return 0;
}


