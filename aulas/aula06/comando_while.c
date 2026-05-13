#include <stdio.h>

int main(){

    int numero =0;
    printf ( "entre com um numero de 1 a 10 :");
    scanf("%i",&numero);
        //remover o char  do buffer  ate \n
    while (getchar() !='\n');
    
    while ( numjero <1 || nimero >10 ){
        printf ("numero inavalido! tente dnv\n");
        scanf("%i",&numero)
        while (getchar() != '\n' );
    }
    
    return 0;
}