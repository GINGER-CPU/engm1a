#include <stdio.h>

int main(){

    char tecla_pressionada;

    printf("precione uma tecla:\n ");
    scanf("%c", &tecla_pressionada);
    printf(  "voce precionou a tecla %c\n" , tecla_pressionada);
    while ( getchar( )!= '\n');
    int idade;
    
    printf("informe sua idade:\n");
    scanf("%i", &idade);
    printf( "vc tem %i anos\n",idade);
    while ( getchar( )!= '\n');
    
    float preço;
    printf("informe opreço da passagem :\n");
    scanf("%f", &preço);
    printf( "o preço da passagem eh %.2f\n",preço);
    while ( getchar( )!= '\n');
    return 0;
}