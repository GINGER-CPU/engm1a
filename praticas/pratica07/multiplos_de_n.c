//Ler um número inteiro N e imprimir seus múltiplos no intervalo de 1 a 100
#include <stdio.h>

int main(){
    int x=1;
    int numero ;
printf(" digita um numero :");
scanf("%i",&numero);
    for(x=1;x<11;x++){
        printf("%i x %i = %i\n",numero,x,numero * x);

    }

    return 0;
}